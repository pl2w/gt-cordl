#pragma once
// IWYU pragma private; include "Modio/API/ModioAPIRequestOptions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/API/zzzz__ModioAPIRequestOptions_def.hpp"
#include "Modio/API/zzzz__IApiRequest_def.hpp"
#include "Modio/API/zzzz__ModioAPIFileParameter_def.hpp"
#include "Modio/API/zzzz__ModioAPIRequestOptions_def.hpp"
#include "Modio/API/zzzz__SearchFilter_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_QueryParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_QueryParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddd84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_QueryParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_HeaderParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_HeaderParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddd8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_HeaderParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_RequiresAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_RequiresAuthentication)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddd94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_RequiresAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.set_RequiresAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(bool)>(&::Modio::API::ModioAPIRequestOptions::set_RequiresAuthentication)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"set_RequiresAuthentication", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_FormParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_FormParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fddda4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_FormParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_FileParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>* (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_FileParameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdddac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_FileParameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.get_BodyDataBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<uint8_t> (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::get_BodyDataBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdddb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_BodyDataBytes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.set_BodyDataBytes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::ArrayW<uint8_t>)>(&::Modio::API::ModioAPIRequestOptions::set_BodyDataBytes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdddbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"set_BodyDataBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9fddb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddQueryParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::StringW, ::System::Object*)>(&::Modio::API::ModioAPIRequestOptions::AddQueryParameter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fdddc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddQueryParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddHeaderParameter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::StringW, ::System::Object*)>(&::Modio::API::ModioAPIRequestOptions::AddHeaderParameter)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fde24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddHeaderParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddFilterParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::Modio::API::SearchFilter*)>(&::Modio::API::ModioAPIRequestOptions::AddFilterParameters)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9fde2d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddFilterParameters", {}, {::i2c::type_of<::Modio::API::SearchFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.RequireAuthentication
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::RequireAuthentication)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9fde4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"RequireAuthentication", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.ParameterToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Object*)>(&::Modio::API::ModioAPIRequestOptions::ParameterToString)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x9fdde4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"ParameterToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::ArrayW<uint8_t>)>(&::Modio::API::ModioAPIRequestOptions::AddBody)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fde4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::Modio::API::IApiRequest*)>(&::Modio::API::ModioAPIRequestOptions::AddBody)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9fde4b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::Modio::API::IApiRequest*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions.AddBody
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)(::Modio::API::IApiRequest*, ::StringW)>(&::Modio::API::ModioAPIRequestOptions::AddBody)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9fde8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::Modio::API::IApiRequest*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions::*)()>(&::Modio::API::ModioAPIRequestOptions::_ctor)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fdd36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__QueryParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__QueryParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____QueryParameters_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__QueryParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____QueryParameters_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__HeaderParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeaderParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__HeaderParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeaderParameters_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__HeaderParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeaderParameters_k__BackingField = value;
}
constexpr bool& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__RequiresAuthentication_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresAuthentication_k__BackingField;
}
constexpr bool const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__RequiresAuthentication_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____RequiresAuthentication_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__RequiresAuthentication_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____RequiresAuthentication_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__FormParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__FormParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FormParameters_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__FormParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FormParameters_k__BackingField = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__FileParameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileParameters_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>* const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__FileParameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____FileParameters_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__FileParameters_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____FileParameters_k__BackingField = value;
}
constexpr ::ArrayW<uint8_t>& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__BodyDataBytes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyDataBytes_k__BackingField;
}
constexpr ::ArrayW<uint8_t> const& Modio::API::ModioAPIRequestOptions::__cordl_internal_get__BodyDataBytes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____BodyDataBytes_k__BackingField;
}
constexpr void Modio::API::ModioAPIRequestOptions::__cordl_internal_set__BodyDataBytes_k__BackingField(::ArrayW<uint8_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____BodyDataBytes_k__BackingField = value;
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::API::ModioAPIRequestOptions::get_QueryParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_QueryParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::API::ModioAPIRequestOptions::get_HeaderParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_HeaderParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline bool Modio::API::ModioAPIRequestOptions::get_RequiresAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_RequiresAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequestOptions::set_RequiresAuthentication(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"set_RequiresAuthentication", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* Modio::API::ModioAPIRequestOptions::get_FormParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_FormParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>* Modio::API::ModioAPIRequestOptions::get_FileParameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_FileParameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::Modio::API::ModioAPIFileParameter>*>(this, ___internal_method);
}
inline ::ArrayW<uint8_t> Modio::API::ModioAPIRequestOptions::get_BodyDataBytes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"get_BodyDataBytes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequestOptions::set_BodyDataBytes(::ArrayW<uint8_t>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"set_BodyDataBytes", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Modio::API::ModioAPIRequestOptions::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::API::ModioAPIRequestOptions::AddQueryParameter(::StringW  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddQueryParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Modio::API::ModioAPIRequestOptions::AddHeaderParameter(::StringW  key, ::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddHeaderParameter", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void Modio::API::ModioAPIRequestOptions::AddFilterParameters(::Modio::API::SearchFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddFilterParameters", {}, {::i2c::type_of<::Modio::API::SearchFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void Modio::API::ModioAPIRequestOptions::RequireAuthentication()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"RequireAuthentication", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Modio::API::ModioAPIRequestOptions::ParameterToString(::System::Object*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"ParameterToString", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void Modio::API::ModioAPIRequestOptions::AddBody(::ArrayW<uint8_t>  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::ArrayW<uint8_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Modio::API::ModioAPIRequestOptions::AddBody(::Modio::API::IApiRequest*  request)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::Modio::API::IApiRequest*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void Modio::API::ModioAPIRequestOptions::AddBody(::Modio::API::IApiRequest*  request, ::StringW  hint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {"AddBody", {}, {::i2c::type_of<::Modio::API::IApiRequest*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request, hint);
}
inline void Modio::API::ModioAPIRequestOptions::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::API::ModioAPIRequestOptions* Modio::API::ModioAPIRequestOptions::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::ModioAPIRequestOptions*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Modio::API::ModioAPIRequestOptions::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Modio::API::ModioAPIRequestOptions::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequestOptions::ModioAPIRequestOptions()   {
}
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::API::ModioAPIRequestOptions___c::*)()>(&::Modio::API::ModioAPIRequestOptions___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fdeb4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::API::ModioAPIRequestOptions___c._AddBody_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Modio::API::ModioAPIRequestOptions___c::*)(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>)>(&::Modio::API::ModioAPIRequestOptions___c::_AddBody_b__28_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9fdeb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions___c*>(),
                        {"<AddBody>b__28_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Modio::API::ModioAPIRequestOptions___c::setStaticF___9(::Modio::API::ModioAPIRequestOptions___c*  value)  {
::cordl_internals::setStaticField<::Modio::API::ModioAPIRequestOptions___c*, "<>9", ::Modio::API::ModioAPIRequestOptions___c*>(std::forward<::Modio::API::ModioAPIRequestOptions___c*>(value));
}
inline ::Modio::API::ModioAPIRequestOptions___c* Modio::API::ModioAPIRequestOptions___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Modio::API::ModioAPIRequestOptions___c*, "<>9", ::Modio::API::ModioAPIRequestOptions___c*>();
}
inline void Modio::API::ModioAPIRequestOptions___c::setStaticF___9__28_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*, "<>9__28_0", ::Modio::API::ModioAPIRequestOptions___c*>(std::forward<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>* Modio::API::ModioAPIRequestOptions___c::getStaticF___9__28_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>,bool>*, "<>9__28_0", ::Modio::API::ModioAPIRequestOptions___c*>();
}
inline void Modio::API::ModioAPIRequestOptions___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Modio::API::ModioAPIRequestOptions___c::_AddBody_b__28_0(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>  param)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::API::ModioAPIRequestOptions___c*>(),
                        {"<AddBody>b__28_0", {}, {::i2c::type_of<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, param);
}
inline ::Modio::API::ModioAPIRequestOptions___c* Modio::API::ModioAPIRequestOptions___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::API::ModioAPIRequestOptions___c*>());
}
// Ctor Parameters []
constexpr ::Modio::API::ModioAPIRequestOptions___c::ModioAPIRequestOptions___c()   {
}
