#pragma once
// IWYU pragma private; include "Technie/PhysicsCreator/GizmoUtils.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "Technie/PhysicsCreator/zzzz__GizmoUtils_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Technie::PhysicsCreator::GizmoUtils.GetHullColour
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(int32_t)>(&::Technie::PhysicsCreator::GizmoUtils::GetHullColour)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xadc8900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {"GetHullColour", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::GizmoUtils.ToggleGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Technie::PhysicsCreator::GizmoUtils::ToggleGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xadc8988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {"ToggleGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Technie::PhysicsCreator::GizmoUtils._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Technie::PhysicsCreator::GizmoUtils::*)()>(&::Technie::PhysicsCreator::GizmoUtils::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xadc898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Technie::PhysicsCreator::GizmoUtils::setStaticF_HULL_COLOURS(::ArrayW<::UnityEngine::Color>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Color>, "HULL_COLOURS", ::Technie::PhysicsCreator::GizmoUtils*>(std::forward<::ArrayW<::UnityEngine::Color>>(value));
}
inline ::ArrayW<::UnityEngine::Color> Technie::PhysicsCreator::GizmoUtils::getStaticF_HULL_COLOURS()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Color>, "HULL_COLOURS", ::Technie::PhysicsCreator::GizmoUtils*>();
}
inline ::UnityEngine::Color Technie::PhysicsCreator::GizmoUtils::GetHullColour(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {"GetHullColour", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, index);
}
inline void Technie::PhysicsCreator::GizmoUtils::ToggleGizmos(bool  gizmosOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {"ToggleGizmos", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gizmosOn);
}
inline void Technie::PhysicsCreator::GizmoUtils::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Technie::PhysicsCreator::GizmoUtils*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Technie::PhysicsCreator::GizmoUtils* Technie::PhysicsCreator::GizmoUtils::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Technie::PhysicsCreator::GizmoUtils*>());
}
// Ctor Parameters []
constexpr ::Technie::PhysicsCreator::GizmoUtils::GizmoUtils()   {
}
