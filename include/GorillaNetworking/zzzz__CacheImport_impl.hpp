#pragma once
// IWYU pragma private; include "GorillaNetworking/CacheImport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GorillaNetworking/zzzz__CacheImport_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GorillaNetworking::CacheImport.get_DeploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GorillaNetworking::CacheImport::*)()>(&::GorillaNetworking::CacheImport::get_DeploymentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"get_DeploymentId", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CacheImport.set_DeploymentId
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CacheImport::*)(::StringW)>(&::GorillaNetworking::CacheImport::set_DeploymentId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"set_DeploymentId", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CacheImport.get_TitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* (::GorillaNetworking::CacheImport::*)()>(&::GorillaNetworking::CacheImport::get_TitleData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"get_TitleData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CacheImport.set_TitleData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CacheImport::*)(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*)>(&::GorillaNetworking::CacheImport::set_TitleData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9df88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"set_TitleData", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaNetworking::CacheImport._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaNetworking::CacheImport::*)()>(&::GorillaNetworking::CacheImport::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c9c14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& GorillaNetworking::CacheImport::__cordl_internal_get__DeploymentId_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeploymentId_k__BackingField;
}
constexpr ::StringW const& GorillaNetworking::CacheImport::__cordl_internal_get__DeploymentId_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DeploymentId_k__BackingField;
}
constexpr void GorillaNetworking::CacheImport::__cordl_internal_set__DeploymentId_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DeploymentId_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*& GorillaNetworking::CacheImport::__cordl_internal_get__TitleData_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TitleData_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* const& GorillaNetworking::CacheImport::__cordl_internal_get__TitleData_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TitleData_k__BackingField;
}
constexpr void GorillaNetworking::CacheImport::__cordl_internal_set__TitleData_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TitleData_k__BackingField = value;
}
inline ::StringW GorillaNetworking::CacheImport::get_DeploymentId()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"get_DeploymentId", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GorillaNetworking::CacheImport::set_DeploymentId(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"set_DeploymentId", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* GorillaNetworking::CacheImport::get_TitleData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"get_TitleData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>(this, ___internal_method);
}
inline void GorillaNetworking::CacheImport::set_TitleData(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {"set_TitleData", {}, {::i2c::type_of<::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaNetworking::CacheImport::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaNetworking::CacheImport*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaNetworking::CacheImport* GorillaNetworking::CacheImport::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaNetworking::CacheImport*>());
}
// Ctor Parameters []
constexpr ::GorillaNetworking::CacheImport::CacheImport()   {
}
