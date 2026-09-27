#pragma once
// IWYU pragma private; include "Meta/Conduit/Manifest.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "Meta/Conduit/zzzz__IManifestMethod_def.hpp"
#include "Meta/Conduit/zzzz__InvocationContext_def.hpp"
#include "Meta/Conduit/zzzz__ManifestAction_def.hpp"
#include "Meta/Conduit/zzzz__ManifestEntity_def.hpp"
#include "Meta/Conduit/zzzz__ManifestErrorHandler_def.hpp"
#include "Meta/Conduit/zzzz__Manifest_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Tuple_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Meta::Conduit::Manifest._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::_ctor)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9e1f2a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_ID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.set_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)(::StringW)>(&::Meta::Conduit::Manifest::set_ID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Version", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.set_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)(::StringW)>(&::Meta::Conduit::Manifest::set_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_Domain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_Domain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Domain", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.set_Domain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)(::StringW)>(&::Meta::Conduit::Manifest::set_Domain)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f4fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Domain", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_Entities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>* (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_Entities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Entities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.set_Entities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*)>(&::Meta::Conduit::Manifest::set_Entities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f50c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Entities", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_Actions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>* (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_Actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Actions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.set_Actions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest::*)(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*)>(&::Meta::Conduit::Manifest::set_Actions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Actions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.get_CustomEntityTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::get_CustomEntityTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e1f524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_CustomEntityTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ResolveEntities
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::ResolveEntities)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x9e1f52c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveEntities", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.GetMethodInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Tuple_2<::System::Reflection::MethodInfo*,::System::Type*>* (::Meta::Conduit::Manifest::*)(::Meta::Conduit::IManifestMethod*)>(&::Meta::Conduit::Manifest::GetMethodInfo)> {
  constexpr static std::size_t size = 0x878;
  constexpr static std::size_t addrs = 0x9e1f840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetMethodInfo", {}, {::i2c::type_of<::Meta::Conduit::IManifestMethod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ResolveAllActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::ResolveAllActions)> {
  constexpr static std::size_t size = 0xa08;
  constexpr static std::size_t addrs = 0x9e200e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveAllActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ResolveErrorHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::ResolveErrorHandlers)> {
  constexpr static std::size_t size = 0xa84;
  constexpr static std::size_t addrs = 0x9e20af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveErrorHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ResolveActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::ResolveActions)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9e21574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveActions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.GetBestMethodMatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::MethodInfo* (::Meta::Conduit::Manifest::*)(::System::Type*, ::StringW, ::ArrayW<::System::Type*>)>(&::Meta::Conduit::Manifest::GetBestMethodMatch)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9e200b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetBestMethodMatch", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ContainsAction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest::*)(::StringW)>(&::Meta::Conduit::Manifest::ContainsAction)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9e1c174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ContainsAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.GetInvocationContexts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* (::Meta::Conduit::Manifest::*)(::StringW)>(&::Meta::Conduit::Manifest::GetInvocationContexts)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9e1c4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetInvocationContexts", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::ToString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9e2159c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                    {::i2c::class_of<::Meta::Conduit::Manifest*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest.GetErrorHandlerContexts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* (::Meta::Conduit::Manifest::*)()>(&::Meta::Conduit::Manifest::GetErrorHandlerContexts)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x9e1d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetErrorHandlerContexts", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Conduit::Manifest::__cordl_internal_get__ID_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::Manifest::__cordl_internal_get__ID_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ID_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__ID_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ID_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::Manifest::__cordl_internal_get__Version_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::Manifest::__cordl_internal_get__Version_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Version_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__Version_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Version_k__BackingField = value;
}
constexpr ::StringW& Meta::Conduit::Manifest::__cordl_internal_get__Domain_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Domain_k__BackingField;
}
constexpr ::StringW const& Meta::Conduit::Manifest::__cordl_internal_get__Domain_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Domain_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__Domain_k__BackingField(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Domain_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*& Meta::Conduit::Manifest::__cordl_internal_get__Entities_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Entities_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>* const& Meta::Conduit::Manifest::__cordl_internal_get__Entities_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Entities_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__Entities_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Entities_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*& Meta::Conduit::Manifest::__cordl_internal_get__Actions_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Actions_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>* const& Meta::Conduit::Manifest::__cordl_internal_get__Actions_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Actions_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__Actions_k__BackingField(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Actions_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*& Meta::Conduit::Manifest::__cordl_internal_get_ErrorHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorHandlers;
}
constexpr ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>* const& Meta::Conduit::Manifest::__cordl_internal_get_ErrorHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorHandlers;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set_ErrorHandlers(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestErrorHandler*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorHandlers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*& Meta::Conduit::Manifest::__cordl_internal_get__methodLookup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____methodLookup;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>* const& Meta::Conduit::Manifest::__cordl_internal_get__methodLookup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____methodLookup;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__methodLookup(::System::Collections::Generic::Dictionary_2<::StringW,::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____methodLookup = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*& Meta::Conduit::Manifest::__cordl_internal_get__CustomEntityTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomEntityTypes_k__BackingField;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* const& Meta::Conduit::Manifest::__cordl_internal_get__CustomEntityTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CustomEntityTypes_k__BackingField;
}
constexpr void Meta::Conduit::Manifest::__cordl_internal_set__CustomEntityTypes_k__BackingField(::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CustomEntityTypes_k__BackingField = value;
}
inline void Meta::Conduit::Manifest::setStaticF_WitResponseMatcherIntents(::System::Collections::Generic::List_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "WitResponseMatcherIntents", ::Meta::Conduit::Manifest*>(std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* Meta::Conduit::Manifest::getStaticF_WitResponseMatcherIntents()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "WitResponseMatcherIntents", ::Meta::Conduit::Manifest*>();
}
inline void Meta::Conduit::Manifest::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW Meta::Conduit::Manifest::get_ID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_ID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::Manifest::set_ID(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_ID", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::Manifest::get_Version()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Version", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::Manifest::set_Version(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Version", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW Meta::Conduit::Manifest::get_Domain()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Domain", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void Meta::Conduit::Manifest::set_Domain(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Domain", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>* Meta::Conduit::Manifest::get_Entities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Entities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*>(this, ___internal_method);
}
inline void Meta::Conduit::Manifest::set_Entities(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Entities", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestEntity*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>* Meta::Conduit::Manifest::get_Actions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_Actions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*>(this, ___internal_method);
}
inline void Meta::Conduit::Manifest::set_Actions(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"set_Actions", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestAction*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>* Meta::Conduit::Manifest::get_CustomEntityTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"get_CustomEntityTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::StringW,::System::Type*>*>(this, ___internal_method);
}
inline bool Meta::Conduit::Manifest::ResolveEntities()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveEntities", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Tuple_2<::System::Reflection::MethodInfo*,::System::Type*>* Meta::Conduit::Manifest::GetMethodInfo(::Meta::Conduit::IManifestMethod*  action)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetMethodInfo", {}, {::i2c::type_of<::Meta::Conduit::IManifestMethod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Tuple_2<::System::Reflection::MethodInfo*,::System::Type*>*>(this, ___internal_method, action);
}
inline bool Meta::Conduit::Manifest::ResolveAllActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveAllActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Conduit::Manifest::ResolveErrorHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveErrorHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Meta::Conduit::Manifest::ResolveActions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ResolveActions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::MethodInfo* Meta::Conduit::Manifest::GetBestMethodMatch(::System::Type*  targetType, ::StringW  method, ::ArrayW<::System::Type*>  parameterTypes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetBestMethodMatch", {}, {::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Type*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Reflection::MethodInfo*>(this, ___internal_method, targetType, method, parameterTypes);
}
inline bool Meta::Conduit::Manifest::ContainsAction(::StringW  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"ContainsAction", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, actionId);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* Meta::Conduit::Manifest::GetInvocationContexts(::StringW  actionId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetInvocationContexts", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>(this, ___internal_method, actionId);
}
inline ::StringW Meta::Conduit::Manifest::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Conduit::Manifest*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>* Meta::Conduit::Manifest::GetErrorHandlerContexts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest*>(),
                        {"GetErrorHandlerContexts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Meta::Conduit::Manifest* Meta::Conduit::Manifest::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::Manifest*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::Manifest::Manifest()   {
}
//  Writing Method size for method: ::Meta::Conduit::Manifest___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Conduit::Manifest___c::*)()>(&::Meta::Conduit::Manifest___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e21710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest___c._ResolveAllActions_b__29_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest___c::*)(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*)>(&::Meta::Conduit::Manifest___c::_ResolveAllActions_b__29_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e21718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveAllActions>b__29_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest___c._ResolveAllActions_b__29_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Conduit::Manifest___c::*)(::Meta::Conduit::InvocationContext*, ::Meta::Conduit::InvocationContext*)>(&::Meta::Conduit::Manifest___c::_ResolveAllActions_b__29_1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e21764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveAllActions>b__29_1", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest___c._ResolveErrorHandlers_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Conduit::Manifest___c::*)(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*)>(&::Meta::Conduit::Manifest___c::_ResolveErrorHandlers_b__30_0)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x9e217d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveErrorHandlers>b__30_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Conduit::Manifest___c._ResolveErrorHandlers_b__30_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Conduit::Manifest___c::*)(::Meta::Conduit::InvocationContext*, ::Meta::Conduit::InvocationContext*)>(&::Meta::Conduit::Manifest___c::_ResolveErrorHandlers_b__30_1)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e2181c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveErrorHandlers>b__30_1", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Conduit::Manifest___c::setStaticF___9(::Meta::Conduit::Manifest___c*  value)  {
::cordl_internals::setStaticField<::Meta::Conduit::Manifest___c*, "<>9", ::Meta::Conduit::Manifest___c*>(std::forward<::Meta::Conduit::Manifest___c*>(value));
}
inline ::Meta::Conduit::Manifest___c* Meta::Conduit::Manifest___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::Conduit::Manifest___c*, "<>9", ::Meta::Conduit::Manifest___c*>();
}
inline void Meta::Conduit::Manifest___c::setStaticF___9__29_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*, "<>9__29_0", ::Meta::Conduit::Manifest___c*>(std::forward<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>* Meta::Conduit::Manifest___c::getStaticF___9__29_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*, "<>9__29_0", ::Meta::Conduit::Manifest___c*>();
}
inline void Meta::Conduit::Manifest___c::setStaticF___9__29_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*, "<>9__29_1", ::Meta::Conduit::Manifest___c*>(std::forward<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*>(value));
}
inline ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* Meta::Conduit::Manifest___c::getStaticF___9__29_1()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*, "<>9__29_1", ::Meta::Conduit::Manifest___c*>();
}
inline void Meta::Conduit::Manifest___c::setStaticF___9__30_0(::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*, "<>9__30_0", ::Meta::Conduit::Manifest___c*>(std::forward<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*>(value));
}
inline ::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>* Meta::Conduit::Manifest___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*,bool>*, "<>9__30_0", ::Meta::Conduit::Manifest___c*>();
}
inline void Meta::Conduit::Manifest___c::setStaticF___9__30_1(::System::Comparison_1<::Meta::Conduit::InvocationContext*>*  value)  {
::cordl_internals::setStaticField<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*, "<>9__30_1", ::Meta::Conduit::Manifest___c*>(std::forward<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*>(value));
}
inline ::System::Comparison_1<::Meta::Conduit::InvocationContext*>* Meta::Conduit::Manifest___c::getStaticF___9__30_1()  {
return ::cordl_internals::getStaticField<::System::Comparison_1<::Meta::Conduit::InvocationContext*>*, "<>9__30_1", ::Meta::Conduit::Manifest___c*>();
}
inline void Meta::Conduit::Manifest___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Meta::Conduit::Manifest___c::_ResolveAllActions_b__29_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  invocationContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveAllActions>b__29_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, invocationContext);
}
inline int32_t Meta::Conduit::Manifest___c::_ResolveAllActions_b__29_1(::Meta::Conduit::InvocationContext*  one, ::Meta::Conduit::InvocationContext*  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveAllActions>b__29_1", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, one, two);
}
inline bool Meta::Conduit::Manifest___c::_ResolveErrorHandlers_b__30_0(::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*  invocationContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveErrorHandlers>b__30_0", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Meta::Conduit::InvocationContext*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, invocationContext);
}
inline int32_t Meta::Conduit::Manifest___c::_ResolveErrorHandlers_b__30_1(::Meta::Conduit::InvocationContext*  one, ::Meta::Conduit::InvocationContext*  two)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Conduit::Manifest___c*>(),
                        {"<ResolveErrorHandlers>b__30_1", {}, {::i2c::type_of<::Meta::Conduit::InvocationContext*>(), ::i2c::type_of<::Meta::Conduit::InvocationContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, one, two);
}
inline ::Meta::Conduit::Manifest___c* Meta::Conduit::Manifest___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Conduit::Manifest___c*>());
}
// Ctor Parameters []
constexpr ::Meta::Conduit::Manifest___c::Manifest___c()   {
}
