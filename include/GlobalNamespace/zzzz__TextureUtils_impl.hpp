#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureUtils.hpp"
#include "GlobalNamespace/zzzz__SaveTextureFileFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "GlobalNamespace/zzzz__TextureUtils_def.hpp"
#include "GlobalNamespace/zzzz__SaveTextureFileFormat_def.hpp"
#include "GlobalNamespace/zzzz__TextureUtils_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureUtils.GetTexelSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Texture*)>(&::GlobalNamespace::TextureUtils::GetTexelSize)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x5b19c2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"GetTexelSize", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureUtils.CalcAverageColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color32 (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::TextureUtils::CalcAverageColor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x5b19d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"CalcAverageColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureUtils.SaveToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::StringW, int32_t, int32_t, ::GlobalNamespace::SaveTextureFileFormat, int32_t, bool, ::System::Action_1<bool>*)>(&::GlobalNamespace::TextureUtils::SaveToFile)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x5b19e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SaveTextureFileFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureUtils.CreateCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2D> (*)(::UnityEngine::Texture2D*)>(&::GlobalNamespace::TextureUtils::CreateCopy)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5b1a120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"CreateCopy", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector4 GlobalNamespace::TextureUtils::GetTexelSize(::UnityEngine::Texture*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"GetTexelSize", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(nullptr, ___internal_method, tex);
}
inline ::UnityEngine::Color32 GlobalNamespace::TextureUtils::CalcAverageColor(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"CalcAverageColor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color32>(nullptr, ___internal_method, tex);
}
inline void GlobalNamespace::TextureUtils::SaveToFile(::UnityEngine::Texture*  source, ::StringW  filePath, int32_t  width, int32_t  height, ::GlobalNamespace::SaveTextureFileFormat  fileFormat, int32_t  jpgQuality, bool  asynchronous, ::System::Action_1<bool>*  done)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"SaveToFile", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::SaveTextureFileFormat>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::Action_1<bool>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, filePath, width, height, fileFormat, jpgQuality, asynchronous, done);
}
inline ::UnityW<::UnityEngine::Texture2D> GlobalNamespace::TextureUtils::CreateCopy(::UnityEngine::Texture2D*  tex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils*>(),
                        {"CreateCopy", {}, {::i2c::type_of<::UnityEngine::Texture2D*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2D>>(nullptr, ___internal_method, tex);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureUtils::TextureUtils()   {
}
//  Writing Method size for method: ::GlobalNamespace::TextureUtils___c__DisplayClass2_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureUtils___c__DisplayClass2_0::*)()>(&::GlobalNamespace::TextureUtils___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b1a118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureUtils___c__DisplayClass2_0._SaveToFile_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureUtils___c__DisplayClass2_0::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(&::GlobalNamespace::TextureUtils___c__DisplayClass2_0::_SaveToFile_b__0)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5b1a344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils___c__DisplayClass2_0*>(),
                        {"<SaveToFile>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SaveTextureFileFormat& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_fileFormat()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFormat;
}
constexpr ::GlobalNamespace::SaveTextureFileFormat const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_fileFormat() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___fileFormat;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_fileFormat(::GlobalNamespace::SaveTextureFileFormat  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___fileFormat = value;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t>& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_narray()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_narray() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___narray;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_narray(::Unity::Collections::NativeArray_1<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___narray = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_resizeRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeRT;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_resizeRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizeRT;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_resizeRT(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___resizeRT = value;
}
constexpr int32_t& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
constexpr int32_t& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_jpgQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jpgQuality;
}
constexpr int32_t const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_jpgQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___jpgQuality;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_jpgQuality(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___jpgQuality = value;
}
constexpr ::StringW& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_filePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr ::StringW const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_filePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___filePath;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_filePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___filePath = value;
}
constexpr ::System::Action_1<bool>*& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_done()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___done;
}
constexpr ::System::Action_1<bool>* const& GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_get_done() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___done;
}
constexpr void GlobalNamespace::TextureUtils___c__DisplayClass2_0::__cordl_internal_set_done(::System::Action_1<bool>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___done = value;
}
inline void GlobalNamespace::TextureUtils___c__DisplayClass2_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils___c__DisplayClass2_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureUtils___c__DisplayClass2_0::_SaveToFile_b__0(::UnityEngine::Rendering::AsyncGPUReadbackRequest  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureUtils___c__DisplayClass2_0*>(),
                        {"<SaveToFile>b__0", {}, {::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::GlobalNamespace::TextureUtils___c__DisplayClass2_0* GlobalNamespace::TextureUtils___c__DisplayClass2_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureUtils___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureUtils___c__DisplayClass2_0::TextureUtils___c__DisplayClass2_0()   {
}
