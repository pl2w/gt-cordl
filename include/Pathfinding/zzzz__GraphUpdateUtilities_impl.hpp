#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphUpdateUtilities_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphUpdateUtilities.UpdateGraphsNoBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::GraphUpdateObject*, ::Pathfinding::GraphNode*, ::Pathfinding::GraphNode*, bool)>(&::Pathfinding::GraphUpdateUtilities::UpdateGraphsNoBlock)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x5eb7e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateUtilities*>(),
                        {"UpdateGraphsNoBlock", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::GraphUpdateUtilities.UpdateGraphsNoBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Pathfinding::GraphUpdateObject*, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*, bool)>(&::Pathfinding::GraphUpdateUtilities::UpdateGraphsNoBlock)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5eb7fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateUtilities*>(),
                        {"UpdateGraphsNoBlock", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline bool Pathfinding::GraphUpdateUtilities::UpdateGraphsNoBlock(::Pathfinding::GraphUpdateObject*  guo, ::Pathfinding::GraphNode*  node1, ::Pathfinding::GraphNode*  node2, bool  alwaysRevert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateUtilities*>(),
                        {"UpdateGraphsNoBlock", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<::Pathfinding::GraphNode*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guo, node1, node2, alwaysRevert);
}
inline bool Pathfinding::GraphUpdateUtilities::UpdateGraphsNoBlock(::Pathfinding::GraphUpdateObject*  guo, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  nodes, bool  alwaysRevert)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphUpdateUtilities*>(),
                        {"UpdateGraphsNoBlock", {}, {::i2c::type_of<::Pathfinding::GraphUpdateObject*>(), ::i2c::type_of<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, guo, nodes, alwaysRevert);
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphUpdateUtilities::GraphUpdateUtilities()   {
}
