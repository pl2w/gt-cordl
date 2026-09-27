#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Tables/TableEntryReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_Type_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TableEntryReference)
namespace GlobalNamespace {
struct TableEntryReference_Type;
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
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Localization::Tables::TableEntryReference);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Tables::TableEntryReference, "UnityEngine.Localization.Tables", "TableEntryReference");
// Dependencies UnityEngine.Localization.Tables.TableEntryReference::Type
namespace UnityEngine::Localization::Tables {
// Is value type: true
// CS Name: UnityEngine.Localization.Tables.TableEntryReference
struct CORDL_TYPE TableEntryReference {
public:
// Declarations
using Type = ::GlobalNamespace::TableEntryReference_Type;

 __declspec(property(get=get_Key, put=set_Key)) ::StringW  Key;

 __declspec(property(get=get_KeyId, put=set_KeyId)) int64_t  KeyId;

 __declspec(property(get=get_ReferenceType, put=set_ReferenceType)) ::GlobalNamespace::TableEntryReference_Type  ReferenceType;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableEntryReference>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableEntryReference>*() ;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method Equals, addr 0xb01c180, size 0x90, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb00f704, size 0x54, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Localization::Tables::TableEntryReference  other) ;

/// @brief Method GetHashCode, addr 0xb01c210, size 0xc0, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method OnAfterDeserialize, addr 0xb01c2d4, size 0x40, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0xb01c2d0, size 0x4, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// @brief Method ResolveKeyName, addr 0xb01bf8c, size 0xf8, virtual false, abstract: false, final false
inline ::StringW ResolveKeyName(::UnityEngine::Localization::Tables::SharedTableData*  sharedData) ;

/// @brief Method ToString, addr 0xb01c084, size 0xfc, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0xb00fa4c, size 0x178, virtual false, abstract: false, final false
inline ::StringW ToString(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

/// @brief Method Validate, addr 0xb01beb4, size 0xd8, virtual false, abstract: false, final false
inline void Validate() ;

/// @brief Method get_Key, addr 0xb01be08, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Key() ;

/// @brief Method get_KeyId, addr 0xb01bdf8, size 0x8, virtual false, abstract: false, final false
inline int64_t get_KeyId() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_ReferenceType, addr 0xb01bde8, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TableEntryReference_Type get_ReferenceType() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Localization::Tables::TableEntryReference>"
constexpr ::System::IEquatable_1<::UnityEngine::Localization::Tables::TableEntryReference>* i___System__IEquatable_1___UnityEngine__Localization__Tables__TableEntryReference_() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method op_Implicit, addr 0xb01bea4, size 0x8, virtual false, abstract: false, final false
static inline ::StringW op_Implicit___StringW(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference) ;

/// @brief Method op_Implicit, addr 0xb01be18, size 0x74, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Tables::TableEntryReference op_Implicit___UnityEngine__Localization__Tables__TableEntryReference(::StringW  key) ;

/// @brief Method op_Implicit, addr 0xb01be8c, size 0x18, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Tables::TableEntryReference op_Implicit___UnityEngine__Localization__Tables__TableEntryReference(int64_t  keyId) ;

/// @brief Method op_Implicit, addr 0xb01beac, size 0x8, virtual false, abstract: false, final false
static inline int64_t op_Implicit_int64_t(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference) ;

/// @brief Method set_Key, addr 0xb01be10, size 0x8, virtual false, abstract: false, final false
inline void set_Key(::StringW  value) ;

/// @brief Method set_KeyId, addr 0xb01be00, size 0x8, virtual false, abstract: false, final false
inline void set_KeyId(int64_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ReferenceType, addr 0xb01bdf0, size 0x8, virtual false, abstract: false, final false
inline void set_ReferenceType(::GlobalNamespace::TableEntryReference_Type  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr TableEntryReference() ;

// Ctor Parameters [CppParam { name: "m_KeyId", ty: "int64_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Key", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Valid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReferenceType_k__BackingField", ty: "::GlobalNamespace::TableEntryReference_Type", modifiers: "", def_value: None, comment: None }]
constexpr TableEntryReference(int64_t  m_KeyId, ::StringW  m_Key, bool  m_Valid, ::GlobalNamespace::TableEntryReference_Type  _ReferenceType_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25090};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// [SerializeField]
/// @brief Field m_KeyId, offset: 0x0, size: 0x8, def value: None
 int64_t  m_KeyId;

/// [SerializeField]
/// @brief Field m_Key, offset: 0x8, size: 0x8, def value: None
 ::StringW  m_Key;

/// @brief Field m_Valid, offset: 0x10, size: 0x1, def value: None
 bool  m_Valid;

/// [CompilerGenerated]
/// @brief Field <ReferenceType>k__BackingField, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::TableEntryReference_Type  _ReferenceType_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryReference, m_KeyId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryReference, m_Key) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryReference, m_Valid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Tables::TableEntryReference, _ReferenceType_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Tables::TableEntryReference) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Tables
