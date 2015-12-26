#include "find_first_bundled_vertex_with_my_vertex.h"

#include "find_first_bundled_vertex_with_my_vertex_demo.impl"

#include <iostream>
#include <cassert>

#include "create_bundled_vertices_k2_graph.h"

void find_first_bundled_vertex_with_my_vertex_test() noexcept
{
  {
    const auto g = create_bundled_vertices_k2_graph();
    assert(has_bundled_vertex_with_my_vertex(
      my_bundled_vertex("Me","Myself",1.0,2.0), g)
    );
    const auto vd = find_first_bundled_vertex_with_my_vertex(
      my_bundled_vertex("Me","Myself",1.0,2.0), g
    );
    assert(out_degree(vd,g) == 1); //not boost::out_degree
    assert(in_degree(vd,g) == 1); //not boost::in_degree
  }

  find_first_bundled_vertex_with_my_vertex_demo();
  std::cout << __func__ << ": OK" << '\n';
}

