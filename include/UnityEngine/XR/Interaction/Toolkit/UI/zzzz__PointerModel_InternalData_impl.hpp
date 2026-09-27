#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/UI/PointerModel_InternalData.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/UI/zzzz__PointerModel_InternalData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PointerModel_InternalData.get_hoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* (::GlobalNamespace::PointerModel_InternalData::*)()>(&::GlobalNamespace::PointerModel_InternalData::get_hoverTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432c58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"get_hoverTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_InternalData.set_hoverTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_InternalData::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::GlobalNamespace::PointerModel_InternalData::set_hoverTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"set_hoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_InternalData.get_pointerTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::GlobalNamespace::PointerModel_InternalData::*)()>(&::GlobalNamespace::PointerModel_InternalData::get_pointerTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"get_pointerTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_InternalData.set_pointerTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_InternalData::*)(::UnityEngine::GameObject*)>(&::GlobalNamespace::PointerModel_InternalData::set_pointerTarget)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb432c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"set_pointerTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PointerModel_InternalData.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PointerModel_InternalData::*)()>(&::GlobalNamespace::PointerModel_InternalData::Reset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb432978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* GlobalNamespace::PointerModel_InternalData::get_hoverTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"get_hoverTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_InternalData::set_hoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"set_hoverTargets", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> GlobalNamespace::PointerModel_InternalData::get_pointerTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"get_pointerTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(*this, ___internal_method);
}
inline void GlobalNamespace::PointerModel_InternalData::set_pointerTarget(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"set_pointerTarget", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void GlobalNamespace::PointerModel_InternalData::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PointerModel_InternalData>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_hoverTargets_k__BackingField", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_pointerTarget_k__BackingField", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::PointerModel_InternalData::PointerModel_InternalData(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _hoverTargets_k__BackingField, ::UnityW<::UnityEngine::GameObject>  _pointerTarget_k__BackingField) noexcept  {
this->_hoverTargets_k__BackingField = _hoverTargets_k__BackingField;
this->_pointerTarget_k__BackingField = _pointerTarget_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PointerModel_InternalData::PointerModel_InternalData()   {
}
