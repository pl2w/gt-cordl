#pragma once
// IWYU pragma private; include "Pathfinding/LayerGridGraphUpdate.hpp"
#include "Pathfinding/zzzz__GraphUpdateObject_impl.hpp"
#include "Pathfinding/zzzz__LayerGridGraphUpdate_def.hpp"
//  Writing Method size for method: ::Pathfinding::LayerGridGraphUpdate._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::LayerGridGraphUpdate::*)()>(&::Pathfinding::LayerGridGraphUpdate::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e7ce80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraphUpdate*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Pathfinding::LayerGridGraphUpdate::__cordl_internal_get_recalculateNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNodes;
}
constexpr bool const& Pathfinding::LayerGridGraphUpdate::__cordl_internal_get_recalculateNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___recalculateNodes;
}
constexpr void Pathfinding::LayerGridGraphUpdate::__cordl_internal_set_recalculateNodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___recalculateNodes = value;
}
constexpr bool& Pathfinding::LayerGridGraphUpdate::__cordl_internal_get_preserveExistingNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preserveExistingNodes;
}
constexpr bool const& Pathfinding::LayerGridGraphUpdate::__cordl_internal_get_preserveExistingNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___preserveExistingNodes;
}
constexpr void Pathfinding::LayerGridGraphUpdate::__cordl_internal_set_preserveExistingNodes(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___preserveExistingNodes = value;
}
inline void Pathfinding::LayerGridGraphUpdate::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::LayerGridGraphUpdate*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::LayerGridGraphUpdate* Pathfinding::LayerGridGraphUpdate::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::LayerGridGraphUpdate*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::LayerGridGraphUpdate::LayerGridGraphUpdate()   {
}
