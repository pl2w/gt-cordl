#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableReference.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_Type_impl.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__SharedTableData_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_Type_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.get_ReferenceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::TableReference_Type (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::get_ReferenceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01ac3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_ReferenceType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.set_ReferenceType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)(::GlobalNamespace::TableReference_Type)>(&::UnityEngine::Localization::Tables::TableReference::set_ReferenceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01ac44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_ReferenceType", {}, {::i2c::type_of<::GlobalNamespace::TableReference_Type>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.get_TableCollectionNameGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::get_TableCollectionNameGuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb01ac4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_TableCollectionNameGuid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.set_TableCollectionNameGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)(::System::Guid)>(&::UnityEngine::Localization::Tables::TableReference::set_TableCollectionNameGuid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01ac58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_TableCollectionNameGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.get_TableCollectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::get_TableCollectionName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb01ac60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.set_TableCollectionName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)(::StringW)>(&::UnityEngine::Localization::Tables::TableReference::set_TableCollectionName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb01b138;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_TableCollectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.get_SharedTableData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Localization::Tables::SharedTableData> (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::get_SharedTableData)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0xb01ace0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_SharedTableData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.op_Implicit___UnityEngine__Localization__Tables__TableReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::TableReference (*)(::StringW)>(&::UnityEngine::Localization::Tables::TableReference::op_Implicit___UnityEngine__Localization__Tables__TableReference)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb01b1c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.op_Implicit___UnityEngine__Localization__Tables__TableReference
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::TableReference (*)(::System::Guid)>(&::UnityEngine::Localization::Tables::TableReference::op_Implicit___UnityEngine__Localization__Tables__TableReference)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb01b280;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.op_Implicit___StringW
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::Tables::TableReference::op_Implicit___StringW)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb01b33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.op_Implicit___System__Guid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::Tables::TableReference::op_Implicit___System__Guid)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb01b390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::Validate)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xb01b3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.GetSerializedString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::GetSerializedString)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb01b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"GetSerializedString", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::ToString)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb01b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::TableReference::*)(::System::Object*)>(&::UnityEngine::Localization::Tables::TableReference::Equals)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb01b7b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.GetHashCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::GetHashCode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb01b850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                    {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Localization::Tables::TableReference::*)(::UnityEngine::Localization::Tables::TableReference)>(&::UnityEngine::Localization::Tables::TableReference::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb00f55c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.GuidFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (*)(::StringW)>(&::UnityEngine::Localization::Tables::TableReference::GuidFromString)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb01b948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"GuidFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.StringFromGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Guid)>(&::UnityEngine::Localization::Tables::TableReference::StringFromGuid)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xb019634;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"StringFromGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.TableReferenceFromString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Localization::Tables::TableReference (*)(::StringW)>(&::UnityEngine::Localization::Tables::TableReference::TableReferenceFromString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb01baa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"TableReferenceFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.IsGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Localization::Tables::TableReference::IsGuid)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb01bb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"IsGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb01bbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Localization::Tables::TableReference.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Localization::Tables::TableReference::*)()>(&::UnityEngine::Localization::Tables::TableReference::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb01bc30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Localization::Tables::TableReference::setStaticF_s_GuidToStringCache(::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*, "s_GuidToStringCache", ::UnityEngine::Localization::Tables::TableReference>(std::forward<::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>* UnityEngine::Localization::Tables::TableReference::getStaticF_s_GuidToStringCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*, "s_GuidToStringCache", ::UnityEngine::Localization::Tables::TableReference>();
}
inline void UnityEngine::Localization::Tables::TableReference::setStaticF_s_StringToGuidCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*, "s_StringToGuidCache", ::UnityEngine::Localization::Tables::TableReference>(std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>* UnityEngine::Localization::Tables::TableReference::getStaticF_s_StringToGuidCache()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*, "s_StringToGuidCache", ::UnityEngine::Localization::Tables::TableReference>();
}
inline ::GlobalNamespace::TableReference_Type UnityEngine::Localization::Tables::TableReference::get_ReferenceType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_ReferenceType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::TableReference_Type>(*this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableReference::set_ReferenceType(::GlobalNamespace::TableReference_Type  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_ReferenceType", {}, {::i2c::type_of<::GlobalNamespace::TableReference_Type>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::System::Guid UnityEngine::Localization::Tables::TableReference::get_TableCollectionNameGuid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_TableCollectionNameGuid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableReference::set_TableCollectionNameGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_TableCollectionNameGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::TableReference::get_TableCollectionName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_TableCollectionName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableReference::set_TableCollectionName(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"set_TableCollectionName", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> UnityEngine::Localization::Tables::TableReference::get_SharedTableData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"get_SharedTableData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>(*this, ___internal_method);
}
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::Tables::TableReference::op_Implicit___UnityEngine__Localization__Tables__TableReference(::StringW  tableCollectionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(nullptr, ___internal_method, tableCollectionName);
}
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::Tables::TableReference::op_Implicit___UnityEngine__Localization__Tables__TableReference(::System::Guid  tableCollectionNameGuid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(nullptr, ___internal_method, tableCollectionNameGuid);
}
inline ::StringW UnityEngine::Localization::Tables::TableReference::op_Implicit___StringW(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, tableReference);
}
inline ::System::Guid UnityEngine::Localization::Tables::TableReference::op_Implicit___System__Guid(::UnityEngine::Localization::Tables::TableReference  tableReference)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"op_Implicit", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, tableReference);
}
inline void UnityEngine::Localization::Tables::TableReference::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::TableReference::GetSerializedString()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"GetSerializedString", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::StringW UnityEngine::Localization::Tables::TableReference::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool UnityEngine::Localization::Tables::TableReference::Equals(::System::Object*  obj)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t UnityEngine::Localization::Tables::TableReference::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool UnityEngine::Localization::Tables::TableReference::Equals(::UnityEngine::Localization::Tables::TableReference  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"Equals", {}, {::i2c::type_of<::UnityEngine::Localization::Tables::TableReference>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::System::Guid UnityEngine::Localization::Tables::TableReference::GuidFromString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"GuidFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::Localization::Tables::TableReference::StringFromGuid(::System::Guid  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"StringFromGuid", {}, {::i2c::type_of<::System::Guid>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Localization::Tables::TableReference UnityEngine::Localization::Tables::TableReference::TableReferenceFromString(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"TableReferenceFromString", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Localization::Tables::TableReference>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Localization::Tables::TableReference::IsGuid(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"IsGuid", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Localization::Tables::TableReference::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"OnBeforeSerialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::Localization::Tables::TableReference::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Localization::Tables::TableReference>(),
                        {"OnAfterDeserialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  UnityEngine::Localization::Tables::TableReference::operator ::UnityEngine::ISerializationCallbackReceiver*()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::Localization::Tables::TableReference::i___UnityEngine__ISerializationCallbackReceiver()  {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>"
constexpr  UnityEngine::Localization::Tables::TableReference::operator ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>"
constexpr ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>* UnityEngine::Localization::Tables::TableReference::i___System__IEquatable_1___UnityEngine__Localization__Tables__TableReference_()  {
return static_cast<::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_TableCollectionName", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "m_Valid", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ReferenceType_k__BackingField", ty: "::GlobalNamespace::TableReference_Type", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TableCollectionNameGuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Localization::Tables::TableReference::TableReference(::StringW  m_TableCollectionName, bool  m_Valid, ::GlobalNamespace::TableReference_Type  _ReferenceType_k__BackingField, ::System::Guid  _TableCollectionNameGuid_k__BackingField) noexcept  {
this->m_TableCollectionName = m_TableCollectionName;
this->m_Valid = m_Valid;
this->_ReferenceType_k__BackingField = _ReferenceType_k__BackingField;
this->_TableCollectionNameGuid_k__BackingField = _TableCollectionNameGuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::Localization::Tables::TableReference::TableReference()   {
}
