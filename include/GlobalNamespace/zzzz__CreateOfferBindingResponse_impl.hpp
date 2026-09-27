#pragma once
// IWYU pragma private; include "GlobalNamespace/CreateOfferBindingResponse.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_impl.hpp"
#include "GlobalNamespace/zzzz__CreateOfferBindingResponse_def.hpp"
#include "GlobalNamespace/zzzz__MothershipResponse_def.hpp"
#include "System/Runtime/InteropServices/zzzz__HandleRef_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::System::IntPtr, bool)>(&::GlobalNamespace::CreateOfferBindingResponse::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x528f1e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.getCPtr
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateOfferBindingResponse*)>(&::GlobalNamespace::CreateOfferBindingResponse::getCPtr)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x528f294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferBindingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.swigRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::InteropServices::HandleRef (*)(::GlobalNamespace::CreateOfferBindingResponse*)>(&::GlobalNamespace::CreateOfferBindingResponse::swigRelease)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x528f2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferBindingResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(bool)>(&::GlobalNamespace::CreateOfferBindingResponse::Dispose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x528f370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.ParseFromResponseString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::ParseFromResponseString)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x528f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                    {::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.FromMothershipResponse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CreateOfferBindingResponse* (*)(::GlobalNamespace::MothershipResponse*)>(&::GlobalNamespace::CreateOfferBindingResponse::FromMothershipResponse)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x528f5c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_offer_binding_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_offer_binding_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528f6d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_binding_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_offer_binding_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_offer_binding_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x528f7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_binding_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_title_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528f884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_title_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_title_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x528f95c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_title_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_env_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528fa30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_env_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_env_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x528fb08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_env_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_deployment_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528fbdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_deployment_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_deployment_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x528fcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_deployment_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_offer_display_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_offer_display_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528fd88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_display_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_offer_display_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_offer_display_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x528fe60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_display_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_offer_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(::StringW)>(&::GlobalNamespace::CreateOfferBindingResponse::set_offer_id)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x528ff34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_offer_id
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_offer_id)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x529000c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_id", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_committed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(bool)>(&::GlobalNamespace::CreateOfferBindingResponse::set_committed)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x52900e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_committed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_committed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_committed)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x52901b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_committed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.set_display_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)(int32_t)>(&::GlobalNamespace::CreateOfferBindingResponse::set_display_index)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x529028c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_display_index", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse.get_display_index
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::get_display_index)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5290364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_display_index", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CreateOfferBindingResponse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CreateOfferBindingResponse::*)()>(&::GlobalNamespace::CreateOfferBindingResponse::_ctor)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5290438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::HandleRef& GlobalNamespace::CreateOfferBindingResponse::__cordl_internal_get_swigCPtr()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr ::System::Runtime::InteropServices::HandleRef const& GlobalNamespace::CreateOfferBindingResponse::__cordl_internal_get_swigCPtr() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___swigCPtr;
}
constexpr void GlobalNamespace::CreateOfferBindingResponse::__cordl_internal_set_swigCPtr(::System::Runtime::InteropServices::HandleRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___swigCPtr = value;
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_offer_binding_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "offer_binding_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_offer_binding_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "offer_binding_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_title_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "title_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_title_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "title_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_env_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "env_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_env_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "env_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_deployment_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "deployment_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_deployment_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "deployment_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_offer_display_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "offer_display_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_offer_display_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "offer_display_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_offer_id_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "offer_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_offer_id_name()  {
return ::cordl_internals::getStaticField<::StringW, "offer_id_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_committed_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "committed_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_committed_name()  {
return ::cordl_internals::getStaticField<::StringW, "committed_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::setStaticF_display_index_name(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "display_index_name", ::GlobalNamespace::CreateOfferBindingResponse*>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::getStaticF_display_index_name()  {
return ::cordl_internals::getStaticField<::StringW, "display_index_name", ::GlobalNamespace::CreateOfferBindingResponse*>();
}
inline void GlobalNamespace::CreateOfferBindingResponse::_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {".ctor", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cPtr, cMemoryOwn);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateOfferBindingResponse::getCPtr(::GlobalNamespace::CreateOfferBindingResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"getCPtr", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferBindingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline ::System::Runtime::InteropServices::HandleRef GlobalNamespace::CreateOfferBindingResponse::swigRelease(::GlobalNamespace::CreateOfferBindingResponse*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"swigRelease", {}, {::i2c::type_of<::GlobalNamespace::CreateOfferBindingResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Runtime::InteropServices::HandleRef>(nullptr, ___internal_method, obj);
}
inline void GlobalNamespace::CreateOfferBindingResponse::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline bool GlobalNamespace::CreateOfferBindingResponse::ParseFromResponseString(::StringW  response)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, response);
}
inline ::GlobalNamespace::CreateOfferBindingResponse* GlobalNamespace::CreateOfferBindingResponse::FromMothershipResponse(::GlobalNamespace::MothershipResponse*  response)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"FromMothershipResponse", {}, {::i2c::type_of<::GlobalNamespace::MothershipResponse*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CreateOfferBindingResponse*>(nullptr, ___internal_method, response);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_offer_binding_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_binding_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_offer_binding_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_binding_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_title_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_title_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_title_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_title_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_env_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_env_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_env_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_env_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_deployment_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_deployment_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_deployment_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_deployment_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_offer_display_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_display_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_offer_display_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_display_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_offer_id(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_offer_id", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::CreateOfferBindingResponse::get_offer_id()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_offer_id", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_committed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_committed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::CreateOfferBindingResponse::get_committed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_committed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::set_display_index(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"set_display_index", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::CreateOfferBindingResponse::get_display_index()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {"get_display_index", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::CreateOfferBindingResponse::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::CreateOfferBindingResponse*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CreateOfferBindingResponse* GlobalNamespace::CreateOfferBindingResponse::New_ctor(::System::IntPtr  cPtr, bool  cMemoryOwn)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateOfferBindingResponse*>(cPtr, cMemoryOwn));
}
inline ::GlobalNamespace::CreateOfferBindingResponse* GlobalNamespace::CreateOfferBindingResponse::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CreateOfferBindingResponse*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CreateOfferBindingResponse::CreateOfferBindingResponse()   {
}
