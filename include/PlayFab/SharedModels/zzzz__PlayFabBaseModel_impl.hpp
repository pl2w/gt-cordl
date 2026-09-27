#pragma once
// IWYU pragma private; include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "PlayFab/SharedModels/zzzz__PlayFabBaseModel_def.hpp"
//  Writing Method size for method: ::PlayFab::SharedModels::PlayFabBaseModel.ToJson
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::PlayFab::SharedModels::PlayFabBaseModel::*)()>(&::PlayFab::SharedModels::PlayFabBaseModel::ToJson)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa7dee4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabBaseModel*>(),
                        {"ToJson", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::PlayFab::SharedModels::PlayFabBaseModel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::PlayFab::SharedModels::PlayFabBaseModel::*)()>(&::PlayFab::SharedModels::PlayFabBaseModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa7def50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabBaseModel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW PlayFab::SharedModels::PlayFabBaseModel::ToJson()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabBaseModel*>(),
                        {"ToJson", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void PlayFab::SharedModels::PlayFabBaseModel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::PlayFab::SharedModels::PlayFabBaseModel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::PlayFab::SharedModels::PlayFabBaseModel* PlayFab::SharedModels::PlayFabBaseModel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::PlayFab::SharedModels::PlayFabBaseModel*>());
}
// Ctor Parameters []
constexpr ::PlayFab::SharedModels::PlayFabBaseModel::PlayFabBaseModel()   {
}
