#pragma once
// IWYU pragma private; include "GlobalNamespace/MetaXRAcousticNativeInterface.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticNativeInterface_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticNativeInterface_def.hpp"
#include "GlobalNamespace/zzzz__MetaXRAcousticNativeInterface_ovrAudioScalarType_def.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticMapStatus_def.hpp"
#include "Meta/XR/Acoustics/zzzz__AcousticModel_def.hpp"
#include "Meta/XR/Acoustics/zzzz__ControlZoneProperty_def.hpp"
#include "Meta/XR/Acoustics/zzzz__EnableFlagInternal_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MapParameters_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MaterialProperty_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshGroup_def.hpp"
#include "Meta/XR/Acoustics/zzzz__MeshSimplification_def.hpp"
#include "Meta/XR/Acoustics/zzzz__ObjectFlags_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface.get_Interface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* (*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface::get_Interface)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e9f818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {"get_Interface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface.FindInterface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* (*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface::FindInterface)> {
  constexpr static std::size_t size = 0x4ec;
  constexpr static std::size_t addrs = 0x9eaf8dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {"FindInterface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticNativeInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eaffe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::MetaXRAcousticNativeInterface::setStaticF_CachedInterface(::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*, "CachedInterface", ::GlobalNamespace::MetaXRAcousticNativeInterface*>(std::forward<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(value));
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface::getStaticF_CachedInterface()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*, "CachedInterface", ::GlobalNamespace::MetaXRAcousticNativeInterface*>();
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface::get_Interface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {"get_Interface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface::FindInterface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {"FindInterface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(nullptr, ___internal_method);
}
inline void GlobalNamespace::MetaXRAcousticNativeInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticNativeInterface*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface::MetaXRAcousticNativeInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetAcousticModel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ResetReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ResetReverb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::Meta::XR::Acoustics::EnableFlagInternal, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioGeometry)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba83c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9eba844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba87c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioGeometryGetSimplifiedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryGetSimplifiedMesh)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9eba884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioMaterial)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba8ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialReset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba92c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eba938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9eba97c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba9e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eba9ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateControlZone)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyControlZone)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaa00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaa08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9ebaa10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaa1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9ebaa24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetBox)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaa84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetBox)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ebaa8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaaa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9ebaaa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneReset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaadc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface.MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9ebaae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, model);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ResetReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, indices, materialIndices);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioMaterial(::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::CreateControlZone(::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property);
}
inline void GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface* GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr  GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::operator ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_DummyInterface::MetaXRAcousticNativeInterface_DummyInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::get_context)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9eb6eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_GetPluginContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_GetPluginContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb6ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_GetVersion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb6f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_SetAcousticModel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb7008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetAcousticModel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb708c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ResetSharedReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ResetSharedReverb)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb70a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ResetReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ResetReverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb7120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb7130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::EnableFlagInternal, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb71e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::Meta::XR::Acoustics::EnableFlagInternal, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb7278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb72a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb7324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb733c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb73b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb73c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb7454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9eb747c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9eb7590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9eb763c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb7754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb7808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb788c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9eb7964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb7a8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9eb7a98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb7b38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9eb7b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb7be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb7bf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb7c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9eb7c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb7d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>, ::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::by_ref<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb7df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioGeometryGetSimplifiedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryGetSimplifiedMesh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9eb7ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb8050;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb80d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb80ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb8168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb8170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb820c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb8218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb82bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb82cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb835c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb83e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb83f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb8474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb847c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb850c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9eb8590;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb85c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb864c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb8658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb8724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9eb872c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x9eb8850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9eb898c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb89a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb8a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb8acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb8adc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb8b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9eb8c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9eb8d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8e0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9eb8e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb8eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb8ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb8f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateControlZone)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb8f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_CreateControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateControlVolume)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb8fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateControlZone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9eb9070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyControlZone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb9120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_DestroyControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyControlVolume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb919c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyControlZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb9218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb92b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb9338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb93bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb9464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb94e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9eb956c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb9654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetTransform)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb96d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9eb975c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9eb9904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetTransform)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9eb9a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb9b54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb9bfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb9ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb9d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb9eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb9f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eba014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eba0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eba15c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eba228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eba2c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eba360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eba42c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eba4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9eba564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eba628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ovrAudio_ControlVolumeReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eba6ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneReset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eba730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eba7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eba7e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eba7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface.MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eba7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Major, Minor, Patch);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, quality);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, model);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ResetSharedReverb(::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ResetReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, unused1, numVertices, unused2, unused3, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, numVertices, indices, materialIndices, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, indices, materialIndices);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioMaterial(::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::CreateControlZone(::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_DestroyControlVolume(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property);
}
inline void GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface* GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr  GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::operator ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_FMODPluginInterface::MetaXRAcousticNativeInterface_FMODPluginInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::get_context)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9eb3754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.getOrCreateGlobalOvrAudioContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::getOrCreateGlobalOvrAudioContext)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9eafdc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"getOrCreateGlobalOvrAudioContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_GetVersion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eafe2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_SetAcousticModel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb3794;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetAcousticModel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb3818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ResetSharedReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ResetSharedReverb)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb3830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ResetReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ResetReverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb38ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb38bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb394c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::EnableFlagInternal, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb3974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::Meta::XR::Acoustics::EnableFlagInternal, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb3a04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb3a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb3aac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb3ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb3b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb3b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb3bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9eb3c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9eb3d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9eb3dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb3ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb3f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb400c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb40e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb4214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb42b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb42bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb4364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb43f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb4408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb44a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>, ::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb44b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::by_ref<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb4564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioGeometryGetSimplifiedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryGetSimplifiedMesh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9eb4630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb47c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb4840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb4858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb48d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb48dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4978;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb4984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb4a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb4a38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4abc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb4ac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb4b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb4b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb4bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb4be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb4c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9eb4cf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb4d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9eb4db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb4e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9eb4e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb4f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9eb4f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9eb5090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb50a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb5124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb5130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb51cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb51dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb525c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb5334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb5458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb5464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb5500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb550c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb55a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb55b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb5648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateControlZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb5658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_CreateControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateControlVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb56d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateControlZone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9eb5758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyControlZone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb5808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_DestroyControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyControlVolume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb5884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyControlZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb5900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb599c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb5a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb5aa4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb5b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb5bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9eb5c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb5d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb5db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9eb5e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb5fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb6224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb62cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb6370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb6414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb64e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb657c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb6618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb66e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb6788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb682c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb68f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb6994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb6a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb6afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb6b98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9eb6c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb6cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ovrAudio_ControlVolumeReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb6d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneReset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb6e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eafec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb6ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb6eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface.MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb6eb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::getOrCreateGlobalOvrAudioContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"getOrCreateGlobalOvrAudioContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Major, Minor, Patch);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, quality);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, model);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ResetSharedReverb(::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ResetReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, unused1, numVertices, unused2, unused3, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, numVertices, indices, materialIndices, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, indices, materialIndices);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioMaterial(::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::CreateControlZone(::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_DestroyControlVolume(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property);
}
inline void GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface* GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr  GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::operator ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_WwisePluginInterface::MetaXRAcousticNativeInterface_WwisePluginInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.get_context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::get_context)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9eafff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"get_context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_GetPluginContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_GetPluginContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eafecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_GetVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_GetVersion)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eaff48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_SetAcousticModel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb0034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetAcousticModel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb00b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ResetSharedReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ResetSharedReverb)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb00d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ResetReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ResetReverb)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb014c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb015c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb01ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::EnableFlagInternal, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_Enable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb0214;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::Meta::XR::Acoustics::EnableFlagInternal, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb02a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb02cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioGeometry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb034c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb0364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb03e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9eb03e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9eb0478;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9eb04a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9eb05b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<int32_t>, ::System::UIntPtr, ::System::UIntPtr, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9eb0660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb0778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb082c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb08ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb0984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb0aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb0ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb0b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb0b5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb0bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb0c04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb0c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb0ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb0d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>, ::System::IntPtr, ::System::IntPtr, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9eb0d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::by_ref<uint32_t>, ::ArrayW<uint32_t>, ::ArrayW<uint32_t>, ::by_ref<uint32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb0e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioGeometryGetSimplifiedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryGetSimplifiedMesh)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x9eb0ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioMaterial)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb10e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb10f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb1174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb117c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb1224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb12c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb12d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialReset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb135c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9eb13e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb1400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb147c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb1484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9eb1594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb15cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb164c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9eb1658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9eb172c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9eb1734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9eb1824;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9eb1930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb19c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb19d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb1a6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9eb1afc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb1bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1cf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb1d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb1dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eb1e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9eb1e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9eb1ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateControlZone)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_CreateControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateControlVolume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb1f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateControlZone)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9eb1ff8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyControlZone)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb20a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_DestroyControlVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyControlVolume)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9eb2124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyControlZone)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb21a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb223c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb22c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb2344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb23ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<int32_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb246c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9eb24ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb25d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t*)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetTransform)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x9eb2654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x9eb26d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetTransform)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9eb29a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb2ac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb2b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetBox)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb2c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb2cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb2d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetBox)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb2e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetBox)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb2eb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb2f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetFadeDistance)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9eb3028;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb30cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb3198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetFadeDistance)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb3234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9eb32d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb339c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetFrequency)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9eb3438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9eb34d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb3598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ovrAudio_ControlVolumeReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeReset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9eb361c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneReset)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9eb36a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9eaffdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb3748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb374c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface.MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9eb3750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_get_context_()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr ::System::IntPtr const& GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_get_context_() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___context_;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_set_context_(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___context_ = value;
}
constexpr int32_t& GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_get_version()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr int32_t const& GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_get_version() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___version;
}
constexpr void GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::__cordl_internal_set_version(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___version = value;
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::get_context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"get_context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_GetPluginContext(::by_ref<::System::IntPtr>  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetPluginContext", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline ::System::IntPtr GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_GetVersion(::by_ref<int32_t>  Major, ::by_ref<int32_t>  Minor, ::by_ref<int32_t>  Patch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_GetVersion", {}, {::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, Major, Minor, Patch);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_SetAcousticModel(::System::IntPtr  context, ::Meta::XR::Acoustics::AcousticModel  quality)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_SetAcousticModel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, quality);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetAcousticModel", {}, {::i2c::type_of<::Meta::XR::Acoustics::AcousticModel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, model);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ResetSharedReverb(::System::IntPtr  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ResetSharedReverb", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ResetReverb()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ResetReverb", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_Enable(::System::IntPtr  context, int32_t  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetEnabled(int32_t  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_Enable(::System::IntPtr  context, ::Meta::XR::Acoustics::EnableFlagInternal  what, int32_t  enable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_Enable", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, what, enable);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"SetEnabled", {}, {::i2c::type_of<::Meta::XR::Acoustics::EnableFlagInternal>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioGeometry(::System::IntPtr  context, ::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioGeometry", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioGeometry(::System::IntPtr  geometry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioGeometry", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometrySetObjectFlag", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ObjectFlags>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryUploadMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::System::UIntPtr  verticesBytesOffset, ::System::UIntPtr  vertexCount, ::System::UIntPtr  vertexStride, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  vertexType, ::ArrayW<int32_t>  indices, ::System::UIntPtr  indicesByteOffset, ::System::UIntPtr  indexCount, ::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType  indexType, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, ::System::UIntPtr  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::GlobalNamespace::MetaXRAcousticNativeInterface_ovrAudioScalarType>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, verticesBytesOffset, vertexCount, vertexStride, vertexType, indices, indicesByteOffset, indexCount, indexType, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryUploadSimplifiedMeshArrays", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::Meta::XR::Acoustics::MeshGroup>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MeshSimplification>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometrySetTransform(::System::IntPtr  geometry, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryWriteMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryReadMeshFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryReadMeshMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryWriteMeshFileObj", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::System::IntPtr  unused1, ::by_ref<uint32_t>  numVertices, ::System::IntPtr  unused2, ::System::IntPtr  unused3, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, unused1, numVertices, unused2, unused3, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, ::by_ref<uint32_t>  numVertices, ::ArrayW<uint32_t>  indices, ::ArrayW<uint32_t>  materialIndices, ::by_ref<uint32_t>  numTriangles)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioGeometryGetSimplifiedMeshWithMaterials", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::ArrayW<uint32_t>>(), ::i2c::type_of<::by_ref<uint32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, geometry, vertices, numVertices, indices, materialIndices, numTriangles);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioGeometryGetSimplifiedMesh", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>(), ::i2c::type_of<::by_ref<::ArrayW<uint32_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, indices, materialIndices);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioMaterial(::System::IntPtr  context, ::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioMaterial(::by_ref<::System::IntPtr>  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioMaterial", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioMaterial(::System::IntPtr  material)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioMaterial", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialGetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioMaterialReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::MaterialProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateAudioSceneIR(::System::IntPtr  context, ::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateAudioSceneIR", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyAudioSceneIR", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetStatus", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"InitializeAudioSceneIRParameters", {}, {::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRCompute", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRComputeCustomPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>(), ::i2c::type_of<::by_ref<::Meta::XR::Acoustics::MapParameters>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetPointCount", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::UIntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetPoints", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<::System::UIntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRWriteFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRReadFile", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"AudioSceneIRReadMemory", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateControlZone(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateControlZone", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_CreateControlVolume(::System::IntPtr  context, ::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_CreateControlVolume", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, context, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::CreateControlZone(::by_ref<::System::IntPtr>  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"CreateControlZone", {}, {::i2c::type_of<::by_ref<::System::IntPtr>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_DestroyControlVolume(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_DestroyControlVolume", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::DestroyControlZone(::System::IntPtr  control)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"DestroyControlZone", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetEnabled(::System::IntPtr  control, int32_t  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetEnabled(::System::IntPtr  control, ::by_ref<int32_t>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetTransform(::System::IntPtr  control, float_t*  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<float_t>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetBox", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneGetFadeDistance", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneSetFrequency", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ovrAudio_ControlVolumeReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ovrAudio_ControlVolumeReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, control, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"ControlZoneReset", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Meta::XR::Acoustics::ControlZoneProperty>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property);
}
inline void GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioGeometrySetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.AudioSceneIRSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_INativeInterface_ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>(),
                        {"MetaXRAcousticNativeInterface.INativeInterface.ControlZoneSetTransform", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface*>());
}
/// @brief Convert operator to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr  GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::operator ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface"
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface* GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::i___GlobalNamespace__MetaXRAcousticNativeInterface_INativeInterface() noexcept {
return static_cast<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MetaXRAcousticNativeInterface_UnityNativeInterface::MetaXRAcousticNativeInterface_UnityNativeInterface()   {
}
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.SetAcousticModel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::Meta::XR::Acoustics::AcousticModel)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetAcousticModel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ResetReverb
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)()>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ResetReverb)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(int32_t, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.SetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::Meta::XR::Acoustics::EnableFlagInternal, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.CreateAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioGeometry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.DestroyAudioGeometry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioGeometry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometrySetObjectFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ObjectFlags, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometrySetObjectFlag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryUploadMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryUploadMeshArrays)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryUploadSimplifiedMeshArrays
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, int32_t, ::ArrayW<int32_t>, int32_t, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>, int32_t, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryUploadSimplifiedMeshArrays)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometrySetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometrySetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryGetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryWriteMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryWriteMeshFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryReadMeshFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryReadMeshFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryReadMeshMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryReadMeshMemory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryWriteMeshFileObj
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryWriteMeshFileObj)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioGeometryGetSimplifiedMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>, ::by_ref<::ArrayW<uint32_t>>, ::by_ref<::ArrayW<uint32_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryGetSimplifiedMesh)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioMaterialGetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialGetFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.CreateAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.DestroyAudioMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioMaterial)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioMaterialSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialSetFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioMaterialReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::MaterialProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.CreateAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioSceneIR)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.DestroyAudioSceneIR
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioSceneIR)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRSetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRGetStatus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetStatus)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.InitializeAudioSceneIRParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::InitializeAudioSceneIRParameters)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRCompute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRComputeCustomPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr, ::by_ref<::Meta::XR::Acoustics::MapParameters>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRComputeCustomPoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRGetPointCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::System::UIntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetPointCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRGetPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::ArrayW<float_t>, ::System::UIntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetPoints)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRSetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRWriteFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRWriteFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRReadFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::StringW)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRReadFile)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.AudioSceneIRReadMemory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::System::IntPtr, uint64_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRReadMemory)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.CreateControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::by_ref<::System::IntPtr>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateControlZone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.DestroyControlZone
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyControlZone)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneSetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, bool)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneGetEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<bool>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneSetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneGetTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<::ArrayW<float_t>>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetTransform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneSetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetBox)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneGetBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetBox)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneSetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, float_t, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetFadeDistance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneGetFadeDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::by_ref<float_t>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetFadeDistance)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneSetFrequency
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty, float_t, float_t)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetFrequency)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface.ControlZoneReset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::*)(::System::IntPtr, ::Meta::XR::Acoustics::ControlZoneProperty)>(&::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneReset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(),
                    {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 47}
                ));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetAcousticModel(::Meta::XR::Acoustics::AcousticModel  model)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, model);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ResetReverb()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetEnabled(int32_t  feature, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::SetEnabled(::Meta::XR::Acoustics::EnableFlagInternal  feature, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, feature, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioGeometry(::by_ref<::System::IntPtr>  geometry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioGeometry(::System::IntPtr  geometry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometrySetObjectFlag(::System::IntPtr  geometry, ::Meta::XR::Acoustics::ObjectFlags  flag, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, flag, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryUploadMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryUploadSimplifiedMeshArrays(::System::IntPtr  geometry, ::ArrayW<float_t>  vertices, int32_t  vertexCount, ::ArrayW<int32_t>  indices, int32_t  indexCount, ::ArrayW<::Meta::XR::Acoustics::MeshGroup>  groups, int32_t  groupCount, ::by_ref<::Meta::XR::Acoustics::MeshSimplification>  simplification)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, vertexCount, indices, indexCount, groups, groupCount, simplification);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometrySetTransform(::System::IntPtr  geometry, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryGetTransform(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryWriteMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryReadMeshFile(::System::IntPtr  geometry, ::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryReadMeshMemory(::System::IntPtr  geometry, ::System::IntPtr  data, uint64_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryWriteMeshFileObj(::System::IntPtr  geometry, ::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioGeometryGetSimplifiedMesh(::System::IntPtr  geometry, ::by_ref<::ArrayW<float_t>>  vertices, ::by_ref<::ArrayW<uint32_t>>  indices, ::by_ref<::ArrayW<uint32_t>>  materialIndices)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, geometry, vertices, indices, materialIndices);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialGetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, ::by_ref<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioMaterial(::by_ref<::System::IntPtr>  material)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioMaterial(::System::IntPtr  material)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialSetFrequency(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property, float_t  frequency, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioMaterialReset(::System::IntPtr  material, ::Meta::XR::Acoustics::MaterialProperty  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, material, property);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateAudioSceneIR(::by_ref<::System::IntPtr>  sceneIR)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyAudioSceneIR(::System::IntPtr  sceneIR)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRSetEnabled(::System::IntPtr  sceneIR, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetEnabled(::System::IntPtr  sceneIR, ::by_ref<bool>  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetStatus(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::AcousticMapStatus>  status)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, status);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::InitializeAudioSceneIRParameters(::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRCompute(::System::IntPtr  sceneIR, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRComputeCustomPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  pointCount, ::by_ref<::Meta::XR::Acoustics::MapParameters>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, pointCount, parameters);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetPointCount(::System::IntPtr  sceneIR, ::by_ref<::System::UIntPtr>  pointCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, pointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetPoints(::System::IntPtr  sceneIR, ::ArrayW<float_t>  points, ::System::UIntPtr  maxPointCount)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, points, maxPointCount);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRSetTransform(::System::IntPtr  sceneIR, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRGetTransform(::System::IntPtr  sceneIR, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRWriteFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRReadFile(::System::IntPtr  sceneIR, ::StringW  filePath)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, filePath);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::AudioSceneIRReadMemory(::System::IntPtr  sceneIR, ::System::IntPtr  data, uint64_t  dataLength)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, sceneIR, data, dataLength);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::CreateControlZone(::by_ref<::System::IntPtr>  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::DestroyControlZone(::System::IntPtr  control)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetEnabled(::System::IntPtr  control, bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetEnabled(::System::IntPtr  control, ::by_ref<bool>  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, enabled);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetTransform(::System::IntPtr  control, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetTransform(::System::IntPtr  control, ::by_ref<::ArrayW<float_t>>  matrix4x4)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, matrix4x4);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetBox(::System::IntPtr  control, float_t  sizeX, float_t  sizeY, float_t  sizeZ)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetBox(::System::IntPtr  control, ::by_ref<float_t>  sizeX, ::by_ref<float_t>  sizeY, ::by_ref<float_t>  sizeZ)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, sizeX, sizeY, sizeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetFadeDistance(::System::IntPtr  control, float_t  fadeX, float_t  fadeY, float_t  fadeZ)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneGetFadeDistance(::System::IntPtr  control, ::by_ref<float_t>  fadeX, ::by_ref<float_t>  fadeY, ::by_ref<float_t>  fadeZ)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, fadeX, fadeY, fadeZ);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneSetFrequency(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property, float_t  frequency, float_t  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property, frequency, value);
}
inline int32_t GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface::ControlZoneReset(::System::IntPtr  control, ::Meta::XR::Acoustics::ControlZoneProperty  property)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::MetaXRAcousticNativeInterface_INativeInterface*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, control, property);
}
