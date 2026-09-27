#pragma once
// IWYU pragma private; include "Pathfinding/Examples/Astar3DButton.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Pathfinding/Examples/zzzz__Astar3DButton_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
//  Writing Method size for method: ::Pathfinding::Examples::Astar3DButton.OnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::Astar3DButton::*)(bool)>(&::Pathfinding::Examples::Astar3DButton::OnHover)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef4d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {"OnHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::Astar3DButton.OnClick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::Astar3DButton::*)()>(&::Pathfinding::Examples::Astar3DButton::OnClick)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5ef4d48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {"OnClick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Pathfinding::Examples::Astar3DButton._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Pathfinding::Examples::Astar3DButton::*)()>(&::Pathfinding::Examples::Astar3DButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ef4d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Pathfinding::GraphNode*& Pathfinding::Examples::Astar3DButton::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::Pathfinding::GraphNode* const& Pathfinding::Examples::Astar3DButton::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void Pathfinding::Examples::Astar3DButton::__cordl_internal_set_node(::Pathfinding::GraphNode*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
inline void Pathfinding::Examples::Astar3DButton::OnHover(bool  hover)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {"OnHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hover);
}
inline void Pathfinding::Examples::Astar3DButton::OnClick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {"OnClick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Pathfinding::Examples::Astar3DButton::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Pathfinding::Examples::Astar3DButton*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Pathfinding::Examples::Astar3DButton* Pathfinding::Examples::Astar3DButton::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Pathfinding::Examples::Astar3DButton*>());
}
// Ctor Parameters []
constexpr ::Pathfinding::Examples::Astar3DButton::Astar3DButton()   {
}
