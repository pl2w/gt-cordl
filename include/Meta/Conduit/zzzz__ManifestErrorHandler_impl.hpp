#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestErrorHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ManifestErrorHandler_def.hpp"
#include "Meta/Conduit/zzzz__IManifestMethod_def.hpp"
#include "Meta/Conduit/zzzz__ManifestAction_def.hpp"
#include "Meta/Conduit/zzzz__ManifestParameter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9e21f18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.set_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestErrorHandler::*)(::StringW)>(&::Meta::Conduit::ManifestErrorHandler::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Assembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.set_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestErrorHandler::*)(::StringW)>(&::Meta::Conduit::ManifestErrorHandler::set_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Assembly", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestErrorHandler::*)(::StringW)>(&::Meta::Conduit::ManifestErrorHandler::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.set_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestErrorHandler::*)(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*)>(&::Meta::Conduit::ManifestErrorHandler::set_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21fd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ManifestErrorHandler::*)(::System::Object*)>(&::Meta::Conduit::ManifestErrorHandler::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e21fe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                    {::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Conduit::ManifestErrorHandler::*)()>(&::Meta::Conduit::ManifestErrorHandler::GetHashCode)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e22110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                    {::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestErrorHandler.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ManifestErrorHandler::*)(::Meta::Conduit::ManifestAction*)>(&::Meta::Conduit::ManifestErrorHandler::Equals)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e2206c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::ManifestAction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void Meta::Conduit::ManifestErrorHandler::__cordl_internal_set__ID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ID_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Assembly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Assembly_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Assembly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Assembly_k__BackingField;
}
constexpr void Meta::Conduit::ManifestErrorHandler::__cordl_internal_set__Assembly_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Assembly_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Meta::Conduit::ManifestErrorHandler::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Parameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* const& Meta::Conduit::ManifestErrorHandler::__cordl_internal_get__Parameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr void Meta::Conduit::ManifestErrorHandler::__cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameters_k__BackingField = value;
}
inline void Meta::Conduit::ManifestErrorHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Conduit::ManifestErrorHandler::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestErrorHandler::set_ID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::ManifestErrorHandler::get_Assembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Assembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestErrorHandler::set_Assembly(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Assembly", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::ManifestErrorHandler::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestErrorHandler::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* Meta::Conduit::ManifestErrorHandler::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestErrorHandler::set_Parameters(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Conduit::ManifestErrorHandler::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Meta::Conduit::ManifestErrorHandler::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::Conduit::ManifestErrorHandler::Equals(::Meta::Conduit::ManifestAction*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestErrorHandler*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::ManifestAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
/// @brief [Preserve]
inline ::Meta::Conduit::ManifestErrorHandler* Meta::Conduit::ManifestErrorHandler::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ManifestErrorHandler*>());
}
/// @brief Convert operator to "::Meta::Conduit::IManifestMethod"
constexpr  Meta::Conduit::ManifestErrorHandler::operator ::Meta::Conduit::IManifestMethod*() noexcept {
return static_cast<::Meta::Conduit::IManifestMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IManifestMethod"
constexpr ::Meta::Conduit::IManifestMethod* Meta::Conduit::ManifestErrorHandler::i___Meta__Conduit__IManifestMethod() noexcept {
return static_cast<::Meta::Conduit::IManifestMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ManifestErrorHandler::ManifestErrorHandler()   {
}
