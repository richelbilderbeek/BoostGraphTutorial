#ifndef LOAD_DIRECTED_CUSTOM_VERTICES_GRAPH_FROM_DOT_H
#define LOAD_DIRECTED_CUSTOM_VERTICES_GRAPH_FROM_DOT_H

#ifndef BOOST_GRAPH_TUTORIAL_NO_GRAPHVIZ

#include "create_empty_directed_custom_vertices_graph.h"

boost::adjacency_list<
  boost::vecS,
  boost::vecS,
  boost::directedS,
  boost::property<
    boost::vertex_custom_type_t, my_custom_vertex
  >
>
load_directed_custom_vertices_graph_from_dot(
  const std::string& dot_filename
);

#endif // BOOST_GRAPH_TUTORIAL_NO_GRAPHVIZ

#endif // LOAD_DIRECTED_CUSTOM_VERTICES_GRAPH_FROM_DOT_H
