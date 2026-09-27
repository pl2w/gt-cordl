#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_Type_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableReference)
namespace GlobalNamespace {
struct TableReference_Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
struct Guid;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Tables::TableReference);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::TableReference, "UnityEngine.Localization.Tables", "TableReference");
// Dependencies System.Guid, UnityEngine.Localization.Tables.TableReference::Type
namespace UnityEngine::Localization::Tables {
// Is value type: true
// CS Name: UnityEngine.Localization.Tables.TableReference
struct CORDL_TYPE TableReference {
public:
// Declarations
using Type = ::GlobalNamespace::TableReference_Type;

 __declspec(property(get=get_ReferenceType, put=set_ReferenceType)) ::GlobalNamespace::TableReference_Type  ReferenceType;

 __declspec(property(get=get_SharedTableData)) ::UnityW<::UnityEngine::Localization::Tables::SharedTableData>  SharedTableData;

 __declspec(property(get=get_TableCollectionName, put=set_TableCollectionName)) ::StringW  TableCollectionName;

 __declspec(property(get=get_TableCollectionNameGuid, put=set_TableCollectionNameGuid)) ::System::Guid  TableCollectionNameGuid;

/// @brief Field s_GuidToStringCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GuidToStringCache, put=setStaticF_s_GuidToStringCache)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*  s_GuidToStringCache;

/// @brief Field s_StringToGuidCache, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_StringToGuidCache, put=setStaticF_s_StringToGuidCache)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*  s_StringToGuidCache;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>*() ;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method Equals, addr 0xb01b7b4, size 0x9c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb00f55c, size 0x114, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Localization::Tables::TableReference  other) ;

/// @brief Method GetHashCode, addr 0xb01b850, size 0xf8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetSerializedString, addr 0xb01b548, size 0xe0, virtual false, abstract: false, final false
inline ::StringW GetSerializedString() ;

/// @brief Method GuidFromString, addr 0xb01b948, size 0x158, virtual false, abstract: false, final false
static inline ::System::Guid GuidFromString(::StringW  value) ;

/// @brief Method IsGuid, addr 0xb01bb54, size 0x78, virtual false, abstract: false, final false
static inline bool IsGuid(::StringW  value) ;

/// @brief Method OnAfterDeserialize, addr 0xb01bc30, size 0xc8, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb01bbcc, size 0x64, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method StringFromGuid, addr 0xb019634, size 0x13c, virtual false, abstract: false, final false
static inline ::StringW StringFromGuid(::System::Guid  value) ;

/// @brief Method TableReferenceFromString, addr 0xb01baa0, size 0xb4, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Tables::TableReference TableReferenceFromString(::StringW  value) ;

/// @brief Method ToString, addr 0xb01b628, size 0x18c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Validate, addr 0xb01b3e4, size 0x164, virtual false, abstract: false, final false
inline void Validate() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>* getStaticF_s_GuidToStringCache() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>* getStaticF_s_StringToGuidCache() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ReferenceType, addr 0xb01ac3c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TableReference_Type get_ReferenceType() ;

/// @brief Method get_SharedTableData, addr 0xb01ace0, size 0x458, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Tables::SharedTableData> get_SharedTableData() ;

/// @brief Method get_TableCollectionName, addr 0xb01ac60, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_TableCollectionName() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_TableCollectionNameGuid, addr 0xb01ac4c, size 0xc, virtual false, abstract: false, final false
inline ::System::Guid get_TableCollectionNameGuid() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>"
constexpr ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableReference>* i___System__IEquatable_1___UnityEngine__Localization__Tables__TableReference_() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method op_Implicit, addr 0xb01b33c, size 0x54, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

/// @brief Method op_Implicit, addr 0xb01b390, size 0x54, virtual false, abstract: false, final false
static inline ::System::Guid op_Implicit___System__Guid(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

/// @brief Method op_Implicit, addr 0xb01b1c8, size 0xb8, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Tables::TableReference op_Implicit___UnityEngine__Localization__Tables__TableReference(::StringW  tableCollectionName) ;

/// @brief Method op_Implicit, addr 0xb01b280, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Tables::TableReference op_Implicit___UnityEngine__Localization__Tables__TableReference(::System::Guid  tableCollectionNameGuid) ;

static inline void setStaticF_s_GuidToStringCache(::System::Collections::Generic::Dictionary_2<::System::Guid,::StringW>*  value) ;

static inline void setStaticF_s_StringToGuidCache(::System::Collections::Generic::Dictionary_2<::StringW,::System::Guid>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReferenceType, addr 0xb01ac44, size 0x8, virtual false, abstract: false, final false
inline void set_ReferenceType(::GlobalNamespace::TableReference_Type  value) ;

/// @brief Method set_TableCollectionName, addr 0xb01b138, size 0x8, virtual false, abstract: false, final false
inline void set_TableCollectionName(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method set_TableCollectionNameGuid, addr 0xb01ac58, size 0x8, virtual false, abstract: false, final false
inline void set_TableCollectionNameGuid(::System::Guid  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TableReference() ;

// Ctor Parameters [CppParam { name: "m_TableCollectionName", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Valid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReferenceType_k__BackingField", ty: "::GlobalNamespace::TableReference_Type", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TableCollectionNameGuid_k__BackingField", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr TableReference(::StringW  m_TableCollectionName, bool  m_Valid, ::GlobalNamespace::TableReference_Type  _ReferenceType_k__BackingField, ::System::Guid  _TableCollectionNameGuid_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25088};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field k_GuidTag offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GuidTag{u"GUID:"};

/// [SerializeField]
/// [FormerlySerializedAs("m_TableName")]
/// @brief Field m_TableCollectionName, offset: 0x0, size: 0x8, def value: None
 ::StringW  m_TableCollectionName;

/// @brief Field m_Valid, offset: 0x8, size: 0x1, def value: None
 bool  m_Valid;

/// [CompilerGenerated]
/// @brief Field <ReferenceType>k__BackingField, offset: 0xc, size: 0x4, def value: None
 ::GlobalNamespace::TableReference_Type  _ReferenceType_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <TableCollectionNameGuid>k__BackingField, offset: 0x10, size: 0x10, def value: None
 ::System::Guid  _TableCollectionNameGuid_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::TableReference, m_TableCollectionName) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableReference, m_Valid) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableReference, _ReferenceType_k__BackingField) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableReference, _TableCollectionNameGuid_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::TableReference) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
