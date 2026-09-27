#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_EditorMethodsInterface.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_EditorMethodsInterface_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_ObjsToCombineTypes_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB_TextureCompressionQuality_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ProgressUpdateDelegate_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__ShaderTextureProperty_def.hpp"
#include "GlobalNamespace/zzzz__MB2_TextureBakeResults_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)()>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::Clear)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.RestoreReadFlagsAndFormats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::DigitalOpus::MB::Core::ProgressUpdateDelegate*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::RestoreReadFlagsAndFormats)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.SetReadWriteFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*, bool, bool)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SetReadWriteFlag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.ConvertTextureFormat_DefaultPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat, bool)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTextureFormat_DefaultPlatform)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.ConvertTextureFormat_PlatformOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*, ::UnityEngine::TextureFormat, ::DigitalOpus::MB::Core::MB_TextureCompressionQuality, bool)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTextureFormat_PlatformOverride)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.SaveTextureArrayToAssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2DArray*, ::UnityEngine::TextureFormat, ::StringW, int32_t, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SaveTextureArrayToAssetDatabase)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.SaveAtlasToAssetDatabase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*, ::DigitalOpus::MB::Core::ShaderTextureProperty*, int32_t, bool, ::UnityEngine::Material*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SaveAtlasToAssetDatabase)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.IsNormalMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsNormalMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.GetPlatformString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)()>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::GetPlatformString)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.SetTextureSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*, int32_t)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SetTextureSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.IsCompressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2D*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsCompressed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.CheckBuildSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(int64_t)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CheckBuildSettings)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.CheckPrefabTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CheckPrefabTypes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.ValidateSkinnedMeshes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ValidateSkinnedMeshes)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.CommitChangesToAssets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)()>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CommitChangesToAssets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.OnPreTextureBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)()>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::OnPreTextureBake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.OnPostTextureBake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)()>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::OnPostTextureBake)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::Destroy)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.DestroyAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::DestroyAsset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.IsAnAsset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Object*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsAnAsset)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.CreateTemporaryAssetCopyForTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::DigitalOpus::MB::Core::ShaderTextureProperty*, ::UnityEngine::Texture2D*, int32_t, int32_t, ::UnityEngine::TextureFormat, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CreateTemporaryAssetCopyForTextureArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.TextureImporterFormatExistsForTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::TextureFormat)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.ConvertTexture2DArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::UnityEngine::Texture2DArray*, ::UnityEngine::Texture2DArray*, ::UnityEngine::TextureFormat)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTexture2DArray)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_EditorMethodsInterface.GetMaterialPrimaryKeysIfAddressables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::*)(::GlobalNamespace::MB2_TextureBakeResults*)>(&::DigitalOpus::MB::Core::MB2_EditorMethodsInterface::GetMaterialPrimaryKeysIfAddressables)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(),
                    {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 23}
                ));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::Clear()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::RestoreReadFlagsAndFormats(::DigitalOpus::MB::Core::ProgressUpdateDelegate*  progressInfo)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, progressInfo);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SetReadWriteFlag(::UnityEngine::Texture2D*  tx, bool  isReadable, bool  addToList)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tx, isReadable, addToList);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTextureFormat_DefaultPlatform(::UnityEngine::Texture2D*  tx, ::UnityEngine::TextureFormat  targetFormat, bool  isNormalMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tx, targetFormat, isNormalMap);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTextureFormat_PlatformOverride(::UnityEngine::Texture2D*  tx, ::UnityEngine::TextureFormat  targetFormat, ::DigitalOpus::MB::Core::MB_TextureCompressionQuality  compressionQuality, bool  isNormalMap)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tx, targetFormat, compressionQuality, isNormalMap);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SaveTextureArrayToAssetDatabase(::UnityEngine::Texture2DArray*  atlas, ::UnityEngine::TextureFormat  foramt, ::StringW  texPropertyName, int32_t  atlasNum, ::UnityEngine::Material*  resMat)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atlas, foramt, texPropertyName, atlasNum, resMat);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SaveAtlasToAssetDatabase(::UnityEngine::Texture2D*  atlas, ::DigitalOpus::MB::Core::ShaderTextureProperty*  texPropertyName, int32_t  atlasNum, bool  doAnySrcMatsHaveProperty, ::UnityEngine::Material*  resMat)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atlas, texPropertyName, atlasNum, doAnySrcMatsHaveProperty, resMat);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsNormalMap(::UnityEngine::Texture2D*  tx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tx);
}
inline ::StringW DigitalOpus::MB::Core::MB2_EditorMethodsInterface::GetPlatformString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::SetTextureSize(::UnityEngine::Texture2D*  tx, int32_t  size)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tx, size);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsCompressed(::UnityEngine::Texture2D*  tx)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, tx);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CheckBuildSettings(int64_t  estimatedAtlasSize)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, estimatedAtlasSize);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CheckPrefabTypes(::DigitalOpus::MB::Core::MB_ObjsToCombineTypes  prefabType, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefabType, gos);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ValidateSkinnedMeshes(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  mom)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, mom);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CommitChangesToAssets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::OnPreTextureBake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::OnPostTextureBake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::Destroy(::UnityEngine::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::DestroyAsset(::UnityEngine::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, o);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::IsAnAsset(::UnityEngine::Object*  o)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, o);
}
inline ::UnityW<::UnityEngine::Texture2D> DigitalOpus::MB::Core::MB2_EditorMethodsInterface::CreateTemporaryAssetCopyForTextureArray(::DigitalOpus::MB::Core::ShaderTextureProperty*  prop, ::UnityEngine::Texture2D*  sliceTex, int32_t  w, int32_t  h, ::UnityEngine::TextureFormat  format, ::DigitalOpus::MB::Core::MB2_LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(this, ___internal_method, prop, sliceTex, w, h, format, logLevel);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::TextureImporterFormatExistsForTextureFormat(::UnityEngine::TextureFormat  texFormat)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, texFormat);
}
inline bool DigitalOpus::MB::Core::MB2_EditorMethodsInterface::ConvertTexture2DArray(::UnityEngine::Texture2DArray*  inArray, ::UnityEngine::Texture2DArray*  outArray, ::UnityEngine::TextureFormat  outFormat)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, inArray, outArray, outFormat);
}
inline void DigitalOpus::MB::Core::MB2_EditorMethodsInterface::GetMaterialPrimaryKeysIfAddressables(::GlobalNamespace::MB2_TextureBakeResults*  textureBakeResults)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::DigitalOpus::MB::Core::MB2_EditorMethodsInterface*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, textureBakeResults);
}
