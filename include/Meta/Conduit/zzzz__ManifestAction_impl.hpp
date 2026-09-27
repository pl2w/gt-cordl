#pragma once
// IWYU pragma private; include "Meta/Conduit/ManifestAction.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__ManifestAction_def.hpp"
#include "Meta/Conduit/zzzz__IManifestMethod_def.hpp"
#include "Meta/Conduit/zzzz__ManifestParameter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::ManifestAction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e21888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.set_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)(::StringW)>(&::Meta::Conduit::ManifestAction::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2196c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.get_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Assembly", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.set_Assembly
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)(::StringW)>(&::Meta::Conduit::ManifestAction::set_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2197c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Assembly", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.set_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)(::StringW)>(&::Meta::Conduit::ManifestAction::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.set_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*)>(&::Meta::Conduit::ManifestAction::set_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e2199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.get_Aliases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::StringW>* (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::get_Aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e219a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Aliases", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.set_Aliases
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::ManifestAction::*)(::System::Collections::Generic::List_1<::StringW>*)>(&::Meta::Conduit::ManifestAction::set_Aliases)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e219ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Aliases", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ManifestAction::*)(::System::Object*)>(&::Meta::Conduit::ManifestAction::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x9e219b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                    {::i2c::class_of<::Meta::Conduit::ManifestAction*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Conduit::ManifestAction::*)()>(&::Meta::Conduit::ManifestAction::GetHashCode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e21b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                    {::i2c::class_of<::Meta::Conduit::ManifestAction*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::ManifestAction.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::ManifestAction::*)(::Meta::Conduit::ManifestAction*)>(&::Meta::Conduit::ManifestAction::Equals)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x9e21a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::ManifestAction*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Conduit::ManifestAction::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestAction::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void Meta::Conduit::ManifestAction::__cordl_internal_set__ID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ID_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::ManifestAction::__cordl_internal_get__Assembly_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Assembly_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestAction::__cordl_internal_get__Assembly_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Assembly_k__BackingField;
}
constexpr void Meta::Conduit::ManifestAction::__cordl_internal_set__Assembly_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Assembly_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::ManifestAction::__cordl_internal_get__Name_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::ManifestAction::__cordl_internal_get__Name_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Name_k__BackingField;
}
constexpr void Meta::Conduit::ManifestAction::__cordl_internal_set__Name_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Name_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*& Meta::Conduit::ManifestAction::__cordl_internal_get__Parameters_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* const& Meta::Conduit::ManifestAction::__cordl_internal_get__Parameters_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Parameters_k__BackingField;
}
constexpr void Meta::Conduit::ManifestAction::__cordl_internal_set__Parameters_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Parameters_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::StringW>*& Meta::Conduit::ManifestAction::__cordl_internal_get__Aliases_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aliases_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::StringW>* const& Meta::Conduit::ManifestAction::__cordl_internal_get__Aliases_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Aliases_k__BackingField;
}
constexpr void Meta::Conduit::ManifestAction::__cordl_internal_set__Aliases_k__BackingField(::System::Collections::Generic::List_1<::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Aliases_k__BackingField = value;
}
inline void Meta::Conduit::ManifestAction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Conduit::ManifestAction::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestAction::set_ID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::ManifestAction::get_Assembly()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Assembly", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestAction::set_Assembly(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Assembly", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::ManifestAction::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestAction::set_Name(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Name", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* Meta::Conduit::ManifestAction::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestAction::set_Parameters(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Parameters", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::Conduit::ManifestAction::get_Aliases()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"get_Aliases", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::StringW>*>(this, ___internal_method);
}
inline void Meta::Conduit::ManifestAction::set_Aliases(::System::Collections::Generic::List_1<::StringW>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"set_Aliases", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Meta::Conduit::ManifestAction::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ManifestAction*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t Meta::Conduit::ManifestAction::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::ManifestAction*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool Meta::Conduit::ManifestAction::Equals(::Meta::Conduit::ManifestAction*  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::ManifestAction*>(),
                        {"Equals", {}, {::i2c::type_of<::Meta::Conduit::ManifestAction*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other);
}
/// @brief [Preserve]
inline ::Meta::Conduit::ManifestAction* Meta::Conduit::ManifestAction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::ManifestAction*>());
}
/// @brief Convert operator to "::Meta::Conduit::IManifestMethod"
constexpr  Meta::Conduit::ManifestAction::operator ::Meta::Conduit::IManifestMethod*() noexcept {
return static_cast<::Meta::Conduit::IManifestMethod*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Conduit::IManifestMethod"
constexpr ::Meta::Conduit::IManifestMethod* Meta::Conduit::ManifestAction::i___Meta__Conduit__IManifestMethod() noexcept {
return static_cast<::Meta::Conduit::IManifestMethod*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Conduit::ManifestAction::ManifestAction()   {
}
