#pragma once
// IWYU pragma private; include "GlobalNamespace/TextureFromURL.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL_Source_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL_def.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL_Source_def.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL__GetRemoteTexture_d__12_def.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL__LoadFromTitleData_d__7_def.hpp"
#include "GlobalNamespace/zzzz__TextureFromURL__applyRemoteTexture_d__11_def.hpp"
#include "PlayFab/zzzz__PlayFabError_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)()>(&::GlobalNamespace::TextureFromURL::OnEnable)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5b30048;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.LoadFromTitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)()>(&::GlobalNamespace::TextureFromURL::LoadFromTitleData)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5b30074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"LoadFromTitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)()>(&::GlobalNamespace::TextureFromURL::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b301d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.OnPlayFabError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)(::PlayFab::PlayFabError*)>(&::GlobalNamespace::TextureFromURL::OnPlayFabError)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b30278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.OnTitleDataRequestComplete
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)(::StringW)>(&::GlobalNamespace::TextureFromURL::OnTitleDataRequestComplete)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5b3027c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnTitleDataRequestComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.applyRemoteTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)(::StringW)>(&::GlobalNamespace::TextureFromURL::applyRemoteTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5b30118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"applyRemoteTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL.GetRemoteTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* (::GlobalNamespace::TextureFromURL::*)(::StringW)>(&::GlobalNamespace::TextureFromURL::GetRemoteTexture)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5b30390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"GetRemoteTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureFromURL._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureFromURL::*)()>(&::GlobalNamespace::TextureFromURL::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5b30498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Renderer>& GlobalNamespace::TextureFromURL::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::Renderer> const& GlobalNamespace::TextureFromURL::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void GlobalNamespace::TextureFromURL::__cordl_internal_set__renderer(::UnityW<::UnityEngine::Renderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr ::GlobalNamespace::TextureFromURL_Source& GlobalNamespace::TextureFromURL::__cordl_internal_get_source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr ::GlobalNamespace::TextureFromURL_Source const& GlobalNamespace::TextureFromURL::__cordl_internal_get_source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___source;
}
constexpr void GlobalNamespace::TextureFromURL::__cordl_internal_set_source(::GlobalNamespace::TextureFromURL_Source  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___source = value;
}
constexpr ::StringW& GlobalNamespace::TextureFromURL::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr ::StringW const& GlobalNamespace::TextureFromURL::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::TextureFromURL::__cordl_internal_set_data(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::TextureFromURL::__cordl_internal_get_texture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::TextureFromURL::__cordl_internal_get_texture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___texture;
}
constexpr void GlobalNamespace::TextureFromURL::__cordl_internal_set_texture(::UnityW<::UnityEngine::Texture2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___texture = value;
}
constexpr int32_t& GlobalNamespace::TextureFromURL::__cordl_internal_get_maxTitleDataAttempts()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTitleDataAttempts;
}
constexpr int32_t const& GlobalNamespace::TextureFromURL::__cordl_internal_get_maxTitleDataAttempts() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTitleDataAttempts;
}
constexpr void GlobalNamespace::TextureFromURL::__cordl_internal_set_maxTitleDataAttempts(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTitleDataAttempts = value;
}
inline void GlobalNamespace::TextureFromURL::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureFromURL::LoadFromTitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"LoadFromTitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureFromURL::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TextureFromURL::OnPlayFabError(::PlayFab::PlayFabError*  error)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnPlayFabError", {}, {::i2c::type_of<::PlayFab::PlayFabError*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, error);
}
inline void GlobalNamespace::TextureFromURL::OnTitleDataRequestComplete(::StringW  imageUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"OnTitleDataRequestComplete", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imageUrl);
}
inline void GlobalNamespace::TextureFromURL::applyRemoteTexture(::StringW  imageUrl)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"applyRemoteTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, imageUrl);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>* GlobalNamespace::TextureFromURL::GetRemoteTexture(::StringW  url)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {"GetRemoteTexture", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Texture2D>>*>(this, ___internal_method, url);
}
inline void GlobalNamespace::TextureFromURL::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TextureFromURL*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureFromURL* GlobalNamespace::TextureFromURL::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureFromURL*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureFromURL::TextureFromURL()   {
}
