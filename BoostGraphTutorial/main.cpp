#include "add_bundled_edge.h"
#include "add_bundled_vertex.h"
#include "add_custom_and_selectable_vertex.h"
#include "add_custom_edge.h"
#include "add_custom_vertex.h"
#include "add_edge.h"
#include "add_edge_between_named_vertices.h"
#include "add_named_and_selectable_vertex.h"
#include "add_named_edge.h"
#include "add_named_vertex.h"
#include "add_vertex.h"
#include "clear_first_vertex_with_name.h"
#include "copy_file.h"
#include "count_vertices_with_name.h"
#include "create_all_direct_neighbour_subgraphs.h"
#include "create_bundled_edges_and_vertices_k3_graph.h"
#include "create_bundled_edges_and_vertices_markov_chain.h"
#include "create_bundled_vertices_k2_graph.h"
#include "create_bundled_vertices_markov_chain.h"
#include "create_custom_and_selectable_vertices_k2_graph.h"
#include "create_custom_and_selectable_vertices_markov_chain.h"
#include "create_custom_edges_and_vertices_k3_graph.h"
#include "create_custom_edges_and_vertices_markov_chain.h"
#include "create_custom_vertices_k2_graph.h"
#include "create_custom_vertices_markov_chain.h"
#include "create_direct_neighbour_subgraph.h"
#include "create_empty_directed_bundled_edges_and_vertices_graph.h"
#include "create_empty_directed_bundled_vertices_graph.h"
#include "create_empty_directed_custom_and_selectable_vertices_graph.h"
#include "create_empty_directed_custom_edges_and_vertices_graph.h"
#include "create_empty_directed_custom_vertices_graph.h"
#include "create_empty_directed_graph.h"
#include "create_empty_directed_graph_with_graph_name.h"
#include "create_empty_directed_named_and_selectable_vertices_graph.h"
#include "create_empty_directed_named_edges_and_vertices_graph.h"
#include "create_empty_undirected_bundled_edges_and_vertices_graph.h"
#include "create_empty_undirected_bundled_vertices_graph.h"
#include "create_empty_undirected_custom_and_selectable_vertices_graph.h"
#include "create_empty_undirected_custom_edges_and_vertices_graph.h"
#include "create_empty_undirected_custom_vertices_graph.h"
#include "create_empty_undirected_graph.h"
#include "create_empty_undirected_graph_with_graph_name.h"
#include "create_empty_undirected_named_and_selectable_vertices_graph.h"
#include "create_empty_undirected_named_edges_and_vertices_graph.h"
#include "create_empty_undirected_named_vertices_graph.h"
#include "create_k2_graph.h"
#include "create_k2_graph_with_graph_name.h"
#include "create_k3_graph.h"
#include "create_markov_chain.h"
#include "create_markov_chain_with_graph_name.h"
#include "create_named_edges_and_vertices_k3_graph.h"
#include "create_named_edges_and_vertices_markov_chain.h"
#include "create_named_vertices_k2_graph.h"
#include "create_named_vertices_markov_chain.h"
#include "create_named_vertices_path_graph.h"
#include "create_nasty_directed_bundled_edges_and_vertices_graph.h"
#include "create_nasty_directed_bundled_vertices_graph.h"
#include "create_nasty_directed_custom_and_selectable_vertices_graph.h"
#include "create_nasty_directed_custom_edges_and_vertices_graph.h"
#include "create_nasty_directed_custom_vertices_graph.h"
#include "create_nasty_directed_named_vertices_graph.h"
#include "create_nasty_undirected_custom_and_selectable_vertices_graph.h"
#include "create_nasty_undirected_custom_edges_and_vertices_graph.h"
#include "create_path_graph.h"
#include "create_path_graph.h"
#include "create_petersen_graph.h"
#include "create_tutorial_chapters_graph.h"
#include "create_tutorial_subchapters_graph.h"
#include "find_first_bundled_edge_with_my_edge.h"
#include "find_first_bundled_vertex_with_my_vertex.h"
#include "find_first_custom_edge_with_my_edge.h"
#include "find_first_custom_vertex_with_my_vertex.h"
#include "find_first_edge_with_name.h"
#include "find_first_vertex_with_name.h"
#include "get_edge_between_vertices.h"
#include "get_edge_descriptors.h"
#include "get_edge_iterators.h"
#include "get_edge_name.h"
#include "get_edge_names.h"
#include "get_first_vertex_with_name_out_degree.h"
#include "get_graph_name.h"
#include "get_my_bundled_edge.h"
#include "get_my_bundled_edges.h"
#include "get_my_bundled_vertex.h"
#include "get_my_bundled_vertexes.h"
#include "get_my_custom_edges.h"
#include "get_my_custom_edges.h"
#include "get_my_custom_vertexes.h"
#include "get_my_custom_vertex.h"
#include "get_n_edges.h"
#include "get_n_vertices.h"
#include "get_sorted_bundled_edge_my_edges.h"
#include "get_type_name.h"
#include "get_vertex_descriptors.h"
#include "get_vertex_iterators.h"
#include "get_vertex_name.h"
#include "get_vertex_names.h"
#include "get_vertex_out_degrees.h"
#include "get_vertex_selectednesses.h"
#include "graphviz_decode.h"
#include "graphviz_encode.h"
#include "has_bundled_edge_with_my_edge.h"
#include "has_bundled_vertex_with_my_vertex.h"
#include "has_custom_edge_with_my_edge.h"
#include "has_edge_between_vertices.h"
#include "has_edge_with_name.h"
#include "has_vertex_with_name.h"
#include "helper.h"
#include "is_graphviz_friendly.h"
#include "is_isomorphic.h"
#include "is_named_vertices_isomorphic.h"
#include "is_valid_dot_file.h"
#include "load_directed_bundled_edges_and_vertices_graph_from_dot.h"
#include "load_directed_bundled_vertices_graph_from_dot.h"
#include "load_directed_custom_and_selectable_vertices_graph_from_dot.h"
#include "load_directed_custom_edges_and_vertices_graph_from_dot.h"
#include "load_directed_custom_vertices_graph_from_dot.h"
#include "load_directed_graph_from_dot.h"
#include "load_directed_graph_with_graph_name_from_dot.h"
#include "load_directed_named_edges_and_vertices_graph_from_dot.h"
#include "load_directed_named_vertices_graph_from_dot.h"
#include "load_undirected_bundled_edges_and_vertices_graph_from_dot.h"
#include "load_undirected_bundled_vertices_graph_from_dot.h"
#include "load_undirected_custom_and_selectable_vertices_graph_from_dot.h"
#include "load_undirected_custom_edges_and_vertices_graph_from_dot.h"
#include "load_undirected_custom_vertices_graph_from_dot.h"
#include "load_undirected_graph_from_dot.h"
#include "load_undirected_graph_with_graph_name_from_dot.h"
#include "load_undirected_named_edges_and_vertices_graph_from_dot.h"
#include "load_undirected_named_vertices_graph_from_dot.h"
#include "my_bundled_edge.h"
#include "my_bundled_vertex.h"
#include "my_custom_edge.h"
#include "my_custom_vertex.h"
#include "property_not_found_node_id.h"
#include "remove_edge_between_vertices_with_names.h"
#include "remove_first_edge_with_name.h"
#include "remove_first_vertex_with_name.h"
#include "save_bundled_edges_and_vertices_graph_to_dot.h"
#include "save_bundled_vertices_graph_to_dot.h"
#include "save_custom_edges_and_vertices_graph_to_dot.h"
#include "save_custom_vertices_graph_to_dot.h"
#include "save_graph_to_dot.h"
#include "save_graph_with_graph_name_to_dot.h"
#include "save_named_edges_and_vertices_graph_to_dot.h"
#include "save_named_vertices_graph_to_dot.h"
#include "seperate_string.h"
#include "set_my_bundled_edge.h"
#include "set_my_bundled_vertexes.h"
#include "set_my_bundled_vertex.h"
#include "set_edge_name.h"
#include "set_graph_name.h"
#include "set_my_custom_edge.h"
#include "set_my_custom_vertexes.h"
#include "set_my_custom_vertex.h"
#include "set_vertex_name.h"
#include "set_vertex_names.h"
#include "get_sorted_vertex_names.h"
#include "save_custom_and_selectable_vertices_graph_to_dot.h"
#include "create_custom_vertices_path_graph.h"
#include "is_custom_vertices_isomorphic.h"
#include "create_empty_directed_custom_and_selectable_edges_and_vertices_graph.h"
#include "create_empty_directed_custom_and_selectable_edges_and_vertices_graph.h"
#include "create_empty_undirected_custom_and_selectable_edges_and_vertices_graph.h"
#include "add_custom_and_selectable_edge.h"
#include "create_custom_and_selectable_edges_and_vertices_markov_chain.h"
#include "save_custom_and_selectable_edges_and_vertices_graph_to_dot.h"
#include "load_directed_custom_and_selectable_edges_and_vertices_graph_from_dot.h"
#include "create_custom_and_selectable_edges_and_vertices_k2_graph.h"
#include "load_undirected_custom_and_selectable_edges_and_vertices_graph_from_dot.h"
#include "add_edge_between_two_selected_vertices.h"
#include "count_vertices_with_selectedness.h"
#include "count_edges_with_selectedness.h"
#include <iostream>

int main()
{
  count_edges_with_selectedness_test();
  count_vertices_with_selectedness_test();
  add_edge_between_two_selected_vertices_test();
  add_edge_between_named_vertices_test();
  load_undirected_custom_and_selectable_edges_and_vertices_graph_from_dot_test();
  create_custom_and_selectable_edges_and_vertices_k2_graph_test();
  load_directed_custom_and_selectable_edges_and_vertices_graph_from_dot_test();
  save_custom_and_selectable_edges_and_vertices_graph_to_dot_test();
  create_custom_and_selectable_edges_and_vertices_markov_chain_test();
  add_custom_and_selectable_edge_test();
  create_empty_undirected_custom_and_selectable_edges_and_vertices_graph_test();
  create_empty_directed_custom_and_selectable_edges_and_vertices_graph_test();
  is_custom_vertices_isomorphic_test();
  create_custom_vertices_path_graph_test();
  save_custom_and_selectable_vertices_graph_to_dot_test();
  get_sorted_vertex_names_test();
  add_bundled_edge_test();
  add_bundled_vertex_test();
  add_custom_and_selectable_vertex_test();
  add_custom_edge_test();
  add_custom_edge_test();
  add_custom_vertex_test();
  add_edge_test();
  add_named_and_selectable_vertex_test();
  add_named_edge_test();
  add_named_vertex_test();
  add_vertex_test();
  clear_first_vertex_with_name_test();
  count_vertices_with_name_test();
  create_all_direct_neighbour_subgraphs_test();
  create_bundled_edges_and_vertices_k3_graph_test();
  create_bundled_edges_and_vertices_markov_chain_test();
  create_bundled_vertices_k2_graph_test();
  create_bundled_vertices_markov_chain_test();
  create_custom_and_selectable_vertices_k2_graph_test();
  create_custom_and_selectable_vertices_markov_chain_test();
  create_custom_edges_and_vertices_k3_graph_test();
  create_custom_edges_and_vertices_markov_chain_test();
  create_custom_vertices_k2_graph_test();
  create_custom_vertices_markov_chain_test();
  create_direct_neighbour_subgraph_test();
  create_empty_directed_bundled_edges_and_vertices_graph_test();
  create_empty_directed_bundled_vertices_graph_test();
  create_empty_directed_custom_and_selectable_vertices_graph_test();
  create_empty_directed_custom_edges_and_vertices_graph_test();
  create_empty_directed_custom_vertices_graph_test();
  create_empty_directed_graph_test();
  create_empty_directed_graph_with_graph_name_test();
  create_empty_directed_named_and_selectable_vertices_graph_test();
  create_empty_directed_named_edges_and_vertices_graph_test();
  create_empty_undirected_bundled_edges_and_vertices_graph_test();
  create_empty_undirected_bundled_vertices_graph_test();
  create_empty_undirected_custom_and_selectable_vertices_graph_test();
  create_empty_undirected_custom_edges_and_vertices_graph_test();
  create_empty_undirected_custom_vertices_graph_test();
  create_empty_undirected_graph_test();
  create_empty_undirected_graph_with_graph_name_test();
  create_empty_undirected_named_and_selectable_vertices_graph_test();
  create_empty_undirected_named_edges_and_vertices_graph_test();
  create_empty_undirected_named_vertices_graph_test();
  create_k2_graph_test();
  create_k2_graph_with_graph_name_test();
  create_k3_graph_test();
  create_markov_chain_test();
  create_markov_chain_with_graph_name_test();
  create_named_edges_and_vertices_k3_graph_test();
  create_named_edges_and_vertices_markov_chain_test();
  create_named_vertices_k2_graph_test();
  create_named_vertices_markov_chain_test();
  create_named_vertices_path_graph_test();
  create_nasty_directed_bundled_edges_and_vertices_graph_test();
  create_nasty_directed_bundled_vertices_graph_test();
  create_nasty_directed_custom_and_selectable_vertices_graph_test();
  create_nasty_directed_custom_edges_and_vertices_graph_test();
  create_nasty_directed_custom_vertices_graph_test();
  create_nasty_directed_named_vertices_graph_test();
  create_nasty_undirected_custom_and_selectable_vertices_graph_test();
  create_nasty_undirected_custom_edges_and_vertices_graph_test();
  create_path_graph_test();
  create_path_graph_test();
  create_petersen_graph_test();
  create_tutorial_chapters_graph_test();
  create_tutorial_subchapters_graph_test();
  find_first_bundled_edge_with_my_edge_test();
  find_first_bundled_vertex_with_my_vertex_test();
  find_first_custom_edge_with_my_edge_test();
  find_first_custom_vertex_with_my_vertex_test();
  find_first_edge_with_name_test();
  find_first_vertex_with_name_test();
  get_my_bundled_edges_test();
  get_my_bundled_edge_test();
  get_my_bundled_vertex_test();
  get_my_bundled_vertexes_test();
  get_my_custom_edges_test();
  get_my_custom_edges_test();
  get_my_custom_edge_test();
  get_my_custom_vertexes_test();
  get_my_custom_vertex_test();
  get_edge_between_vertices_test();
  get_edge_descriptors_test();
  get_edge_iterators_test();
  get_edge_names_test();
  get_edge_name_test();
  get_first_vertex_with_name_out_degree_test();
  get_graph_name_test();
  get_n_vertices_test();
  get_type_name_test();
  get_vertex_descriptors_test();
  get_vertex_iterators_test();
  get_vertex_names_test();
  get_vertex_name_test();
  get_vertex_out_degrees_test();
  get_vertex_selectednesses_test();
  graphviz_decode_test();
  graphviz_encode_test();
  has_bundled_edge_with_my_edge_test();
  has_bundled_vertex_with_my_vertex_test();
  has_custom_edge_with_my_edge_test();
  has_custom_vertex_with_my_vertex_test();
  has_edge_between_vertices_test();
  has_edge_with_name_test();
  has_vertex_with_name_test();
  helper();
  is_graphviz_friendly_test();
  is_isomorphic_test();
  is_named_vertices_isomorphic_test();
  is_valid_dot_file_test();
  load_directed_bundled_edges_and_vertices_graph_from_dot_test();
  load_directed_bundled_edges_and_vertices_graph_from_dot_test();
  load_directed_bundled_vertices_graph_from_dot_test();
  load_directed_custom_and_selectable_vertices_graph_from_dot_test();
  load_directed_custom_edges_and_vertices_graph_from_dot_test();
  load_directed_custom_vertices_graph_from_dot_test();
  load_directed_graph_from_dot_test();
  load_directed_graph_with_graph_name_from_dot_test();
  load_directed_named_edges_and_vertices_graph_from_dot_test();
  load_directed_named_vertices_graph_from_dot_test();
  load_undirected_bundled_edges_and_vertices_graph_from_dot_test();
  load_undirected_bundled_vertices_graph_from_dot_test();
  load_undirected_custom_and_selectable_vertices_graph_from_dot_test();
  load_undirected_custom_edges_and_vertices_graph_from_dot_test();
  load_undirected_custom_vertices_graph_from_dot_test();
  load_undirected_graph_from_dot_test();
  load_undirected_graph_with_graph_name_from_dot_test();
  load_undirected_named_edges_and_vertices_graph_from_dot_test();
  load_undirected_named_vertices_graph_from_dot_test();
  my_bundled_edge_test();
  my_bundled_vertex_test();
  my_custom_edge_test();
  my_custom_vertex_test();
  property_not_found_node_id();
  remove_edge_between_vertices_with_names_test();
  remove_first_edge_with_name_test();
  remove_first_vertex_with_name_test();
  save_bundled_edges_and_vertices_graph_to_dot_test();
  save_bundled_vertices_graph_to_dot_test();
  save_custom_edges_and_vertices_graph_to_dot_test();
  save_custom_vertices_graph_to_dot_test();
  save_graph_to_dot_test();
  save_graph_with_graph_name_to_dot_test();
  save_named_edges_and_vertices_graph_to_dot_test();
  save_named_vertices_graph_to_dot_test();
  seperate_string_test();
  set_my_bundled_edge_test();
  set_my_bundled_vertexes_test();
  set_my_bundled_vertex_test();
  set_my_custom_edge_test();
  set_my_custom_vertexes_test();
  set_my_custom_vertex_test();
  set_edge_name_test();
  set_graph_name_test();
  set_vertex_names_test();
  set_vertex_name_test();

  std::cout << "Done" << std::endl;
}
