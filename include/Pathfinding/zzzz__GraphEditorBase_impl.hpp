#pragma once
// IWYU pragma private; include "Pathfinding/GraphEditorBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Pathfinding/zzzz__GraphEditorBase_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
//  Writing Method size for method: ::Pathfinding::GraphEditorBase._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::GraphEditorBase::*)()>(&::Pathfinding::GraphEditorBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e574b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphEditorBase*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::NavGraph*& Pathfinding::GraphEditorBase::__cordl_internal_get_target()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr ::Pathfinding::NavGraph* const& Pathfinding::GraphEditorBase::__cordl_internal_get_target() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___target;
}
constexpr void Pathfinding::GraphEditorBase::__cordl_internal_set_target(::Pathfinding::NavGraph*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___target = value;
}
inline void Pathfinding::GraphEditorBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::GraphEditorBase*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::GraphEditorBase* Pathfinding::GraphEditorBase::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::GraphEditorBase*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::GraphEditorBase::GraphEditorBase()   {
}
