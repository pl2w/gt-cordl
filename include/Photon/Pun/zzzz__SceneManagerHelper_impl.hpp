#pragma once
// IWYU pragma private; include "Photon/Pun/SceneManagerHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Photon/Pun/zzzz__SceneManagerHelper_def.hpp"
//  Writing Method size for method: ::Photon::Pun::SceneManagerHelper.get_ActiveSceneName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Photon::Pun::SceneManagerHelper::get_ActiveSceneName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa713ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {"get_ActiveSceneName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::SceneManagerHelper.get_ActiveSceneBuildIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Photon::Pun::SceneManagerHelper::get_ActiveSceneBuildIndex)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa728b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {"get_ActiveSceneBuildIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Photon::Pun::SceneManagerHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Photon::Pun::SceneManagerHelper::*)()>(&::Photon::Pun::SceneManagerHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa72c870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Photon::Pun::SceneManagerHelper::get_ActiveSceneName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {"get_ActiveSceneName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline int32_t Photon::Pun::SceneManagerHelper::get_ActiveSceneBuildIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {"get_ActiveSceneBuildIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void Photon::Pun::SceneManagerHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Photon::Pun::SceneManagerHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Photon::Pun::SceneManagerHelper* Photon::Pun::SceneManagerHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Photon::Pun::SceneManagerHelper*>());
}
// Ctor Parameters []
constexpr ::Photon::Pun::SceneManagerHelper::SceneManagerHelper()   {
}
