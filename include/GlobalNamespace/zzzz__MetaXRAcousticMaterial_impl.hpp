#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticMaterial.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterial_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_BuiltinPreset_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterialProperties_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticMaterial_def.hpp"
#include "Meta/XR/Acoustics/zzzz__IMaterialDataProvider_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialData_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::get_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea89b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Properties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.set_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)(::GlobalNamespace::MetaXRAcousticMaterialProperties*)>(&::GlobalNamespace::MetaXRAcousticMaterial::set_Properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea89b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"set_Properties", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.get_Data
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::Acoustics::MaterialData* (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::get_Data)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x9ea89c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Data", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.get_Color
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::get_Color)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9ea89ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Color", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.CopyPresetToCustomData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset)>(&::GlobalNamespace::MetaXRAcousticMaterial::CopyPresetToCustomData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9ea8a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"CopyPresetToCustomData", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::Start)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ea8db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.StartInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::StartInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9ea8df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"StartInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::OnDestroy)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea8e3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.DestroyInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::DestroyInternal)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9ea8e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"DestroyInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.ApplyMaterialProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::ApplyMaterialProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9ea8e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyMaterialProperties", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.CreateMaterialNativeHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::Meta::XR::Acoustics::MaterialData*)>(&::GlobalNamespace::MetaXRAcousticMaterial::CreateMaterialNativeHandle)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9ea46b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"CreateMaterialNativeHandle", {}, {::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.DestroyMaterialNativeHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticMaterial::DestroyMaterialNativeHandle)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9ea47cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"DestroyMaterialNativeHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.ApplyPropertiesToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialData*)>(&::GlobalNamespace::MetaXRAcousticMaterial::ApplyPropertiesToNative)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea8eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyPropertiesToNative", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.ApplyPropertiesToNative
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialData*, ::UnityEngine::GameObject*)>(&::GlobalNamespace::MetaXRAcousticMaterial::ApplyPropertiesToNative)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x9ea8ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyPropertiesToNative", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ea96dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial.Meta_XR_Acoustics_IMaterialDataProvider_get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticMaterial::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial::Meta_XR_Acoustics_IMaterialDataProvider_get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea96e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"Meta.XR.Acoustics.IMaterialDataProvider.get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_properties()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___properties;
}
constexpr ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> const& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_properties() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___properties;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_set_properties(::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___properties = value;
}
constexpr bool& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_hasCustomData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomData;
}
constexpr bool const& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_hasCustomData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasCustomData;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_set_hasCustomData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasCustomData = value;
}
constexpr ::Meta::XR::Acoustics::MaterialData*& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_customData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr ::Meta::XR::Acoustics::MaterialData* const& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_customData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customData;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_set_customData(::Meta::XR::Acoustics::MaterialData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customData = value;
}
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_materialHandle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialHandle;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_get_materialHandle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___materialHandle;
}
constexpr void GlobalNamespace::MetaXRAcousticMaterial::__cordl_internal_set_materialHandle(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___materialHandle = value;
}
inline ::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties> GlobalNamespace::MetaXRAcousticMaterial::get_Properties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Properties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MetaXRAcousticMaterialProperties>>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::set_Properties(::GlobalNamespace::MetaXRAcousticMaterialProperties*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"set_Properties", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::XR::Acoustics::MaterialData* GlobalNamespace::MetaXRAcousticMaterial::get_Data()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Data", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::XR::Acoustics::MaterialData*>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::MetaXRAcousticMaterial::get_Color()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"get_Color", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::CopyPresetToCustomData(::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset  preset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"CopyPresetToCustomData", {}, {::i2c::type_of<::GlobalNamespace::MetaXRAcousticMaterialProperties_BuiltinPreset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preset);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticMaterial::StartInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"StartInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::DestroyInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"DestroyInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::MetaXRAcousticMaterial::ApplyMaterialProperties()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyMaterialProperties", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticMaterial::CreateMaterialNativeHandle(::Meta::XR::Acoustics::MaterialData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"CreateMaterialNativeHandle", {}, {::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::DestroyMaterialNativeHandle(::System::IntPtr  handle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"DestroyMaterialNativeHandle", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, handle);
}
inline bool GlobalNamespace::MetaXRAcousticMaterial::ApplyPropertiesToNative(::System::IntPtr  handle, ::Meta::XR::Acoustics::MaterialData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyPropertiesToNative", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, data);
}
inline bool GlobalNamespace::MetaXRAcousticMaterial::ApplyPropertiesToNative(::System::IntPtr  handle, ::Meta::XR::Acoustics::MaterialData*  data, ::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"ApplyPropertiesToNative", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialData*>(), ::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle, data, gameObject);
}
inline void GlobalNamespace::MetaXRAcousticMaterial::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticMaterial::Meta_XR_Acoustics_IMaterialDataProvider_get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial*>(),
                        {"Meta.XR.Acoustics.IMaterialDataProvider.get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticMaterial* GlobalNamespace::MetaXRAcousticMaterial::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterial*>());
}
/// @brief Convert operator to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr  GlobalNamespace::MetaXRAcousticMaterial::operator ::Meta::XR::Acoustics::IMaterialDataProvider*() noexcept {
return static_cast<::Meta::XR::Acoustics::IMaterialDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::XR::Acoustics::IMaterialDataProvider"
constexpr ::Meta::XR::Acoustics::IMaterialDataProvider* GlobalNamespace::MetaXRAcousticMaterial::i___Meta__XR__Acoustics__IMaterialDataProvider() noexcept {
return static_cast<::Meta::XR::Acoustics::IMaterialDataProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterial::MetaXRAcousticMaterial()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticMaterial___c::*)()>(&::GlobalNamespace::MetaXRAcousticMaterial___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ea9758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticMaterial___c._ApplyPropertiesToNative_b__20_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MetaXRAcousticMaterial___c::*)(::UnityEngine::Transform*)>(&::GlobalNamespace::MetaXRAcousticMaterial___c::_ApplyPropertiesToNative_b__20_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9ea9760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial___c*>(),
                        {"<ApplyPropertiesToNative>b__20_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAcousticMaterial___c::setStaticF___9(::GlobalNamespace::MetaXRAcousticMaterial___c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MetaXRAcousticMaterial___c*, "<>9", ::GlobalNamespace::MetaXRAcousticMaterial___c*>(std::forward<::GlobalNamespace::MetaXRAcousticMaterial___c*>(value));
}
inline ::GlobalNamespace::MetaXRAcousticMaterial___c* GlobalNamespace::MetaXRAcousticMaterial___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MetaXRAcousticMaterial___c*, "<>9", ::GlobalNamespace::MetaXRAcousticMaterial___c*>();
}
inline void GlobalNamespace::MetaXRAcousticMaterial___c::setStaticF___9__20_0(::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*, "<>9__20_0", ::GlobalNamespace::MetaXRAcousticMaterial___c*>(std::forward<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*>(value));
}
inline ::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>* GlobalNamespace::MetaXRAcousticMaterial___c::getStaticF___9__20_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::UnityEngine::Transform>,::StringW>*, "<>9__20_0", ::GlobalNamespace::MetaXRAcousticMaterial___c*>();
}
inline void GlobalNamespace::MetaXRAcousticMaterial___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::MetaXRAcousticMaterial___c::_ApplyPropertiesToNative_b__20_0(::UnityEngine::Transform*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticMaterial___c*>(),
                        {"<ApplyPropertiesToNative>b__20_0", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, t);
}
inline ::GlobalNamespace::MetaXRAcousticMaterial___c* GlobalNamespace::MetaXRAcousticMaterial___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticMaterial___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticMaterial___c::MetaXRAcousticMaterial___c()   {
}
