#pragma once
// IWYU pragma private; include "Pathfinding/INavmesh.hpp"
#include "Pathfinding/zzzz__INavmesh_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::INavmesh.GetNodes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::INavmesh::*)(::System::Action_1<::Pathfinding::GraphNode*>*)>(&::Pathfinding::INavmesh::GetNodes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Pathfinding::INavmesh*>(),
                    {::i2c::class_of<::Pathfinding::INavmesh*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Pathfinding::INavmesh::GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  del)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Pathfinding::INavmesh*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, del);
}
