#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferCatalogItemResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__CreateOfferCatalogItemResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "GlobalNamespace/zzzz__OfferEntitlementMap_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5292464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateOfferCatalogItemResponse*)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x5292518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateOfferCatalogItemResponse*)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5292558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(bool)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x52925f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5292760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreateOfferCatalogItemResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5292844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_offer_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_offer_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x529295c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_offer_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_offer_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_offer_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5292a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_offer_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_title_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5292b08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_title_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5292be0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_title_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_env_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5292cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_env_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5292d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_env_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_name)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5292e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_name)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5292f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_transaction_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_transaction_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x529300c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_transaction_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_transaction_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_transaction_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52930e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_transaction_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_bundle_pricing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::GlobalNamespace::OfferEntitlementMap*)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_bundle_pricing)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x52931b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_bundle_pricing", {}, {::i2c::type_of<::GlobalNamespace::OfferEntitlementMap*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_bundle_pricing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OfferEntitlementMap* (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_bundle_pricing)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x52932a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_bundle_pricing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_discount_percent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(int32_t)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_discount_percent)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52933b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_discount_percent", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_discount_percent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_discount_percent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x529348c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_discount_percent", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_created_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_created_time)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5293560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_created_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_created_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_created_time)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5293638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_created_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_last_updated_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_last_updated_time)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x529370c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_last_updated_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_last_updated_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_last_updated_time)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52937e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_last_updated_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.set_sunset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)(bool)>(&::GlobalNamespace::CreateOfferCatalogItemResponse::set_sunset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52938b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_sunset", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse.get_sunset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::get_sunset)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5293990;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_sunset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferCatalogItemResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferCatalogItemResponse::*)()>(&::GlobalNamespace::CreateOfferCatalogItemResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5293a64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::CreateOfferCatalogItemResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::CreateOfferCatalogItemResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::CreateOfferCatalogItemResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_offer_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "offer_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_offer_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "offer_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_title_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "title_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_title_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "title_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_env_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "env_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_env_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "env_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_name_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "name_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_name_name()  {
return ::cordl_internals::getStaticField<::StringW, "name_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_transaction_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "transaction_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_transaction_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "transaction_id_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_bundle_pricing_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "bundle_pricing_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_bundle_pricing_name()  {
return ::cordl_internals::getStaticField<::StringW, "bundle_pricing_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_discount_percent_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "discount_percent_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_discount_percent_name()  {
return ::cordl_internals::getStaticField<::StringW, "discount_percent_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_created_time_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "created_time_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_created_time_name()  {
return ::cordl_internals::getStaticField<::StringW, "created_time_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_last_updated_time_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "last_updated_time_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_last_updated_time_name()  {
return ::cordl_internals::getStaticField<::StringW, "last_updated_time_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::setStaticF_sunset_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "sunset_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::getStaticF_sunset_name()  {
return ::cordl_internals::getStaticField<::StringW, "sunset_name", ::GlobalNamespace::CreateOfferCatalogItemResponse*>();
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateOfferCatalogItemResponse::getCPtr(::GlobalNamespace::CreateOfferCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateOfferCatalogItemResponse::swigRelease(::GlobalNamespace::CreateOfferCatalogItemResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::CreateOfferCatalogItemResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::CreateOfferCatalogItemResponse* GlobalNamespace::CreateOfferCatalogItemResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateOfferCatalogItemResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_offer_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_offer_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_offer_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_offer_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_title_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_title_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_title_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_env_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_env_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_env_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_transaction_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_transaction_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_transaction_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_transaction_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_bundle_pricing(::GlobalNamespace::OfferEntitlementMap*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_bundle_pricing", {}, {::i2c::type_of<::GlobalNamespace::OfferEntitlementMap*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OfferEntitlementMap* GlobalNamespace::CreateOfferCatalogItemResponse::get_bundle_pricing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_bundle_pricing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OfferEntitlementMap*>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_discount_percent(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_discount_percent", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::CreateOfferCatalogItemResponse::get_discount_percent()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_discount_percent", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_created_time(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_created_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_created_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_created_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_last_updated_time(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_last_updated_time", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferCatalogItemResponse::get_last_updated_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_last_updated_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::set_sunset(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"set_sunset", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CreateOfferCatalogItemResponse::get_sunset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {"get_sunset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferCatalogItemResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferCatalogItemResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateOfferCatalogItemResponse* GlobalNamespace::CreateOfferCatalogItemResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateOfferCatalogItemResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::CreateOfferCatalogItemResponse* GlobalNamespace::CreateOfferCatalogItemResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateOfferCatalogItemResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateOfferCatalogItemResponse::CreateOfferCatalogItemResponse()   {
}
