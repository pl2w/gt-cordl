#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlSerializedData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlSerializedData_UxmlAttributeFlags_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UxmlSerializedData)
namespace GlobalNamespace {
struct UxmlSerializedData_UxmlAttributeFlags;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class UxmlSerializedData;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::UxmlSerializedData*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::UxmlSerializedData*, "UnityEngine.UIElements", "UxmlSerializedData");
// Dependencies System.Object, UnityEngine.UIElements.UxmlSerializedData::UxmlAttributeFlags
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.UxmlSerializedData
class CORDL_TYPE UxmlSerializedData : public ::System::Object {
public:
// Declarations
using UxmlAttributeFlags = ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags;

/// @brief Field s_CurrentDeserializeFlags, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_s_CurrentDeserializeFlags, put=setStaticF_s_CurrentDeserializeFlags)) ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  s_CurrentDeserializeFlags;

/// @brief Field uxmlAssetId, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_uxmlAssetId, put=__cordl_internal_set_uxmlAssetId)) int32_t  uxmlAssetId;

/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Object* CreateInstance() ;

/// @brief Method Deserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void Deserialize(::System::Object*  obj) ;

static inline ::UnityEngine::UIElements::UxmlSerializedData* New_ctor() ;

/// @brief Method ShouldWriteAttributeValue, addr 0xb7b8b4c, size 0x64, virtual false, abstract: false, final false
static inline bool ShouldWriteAttributeValue(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  attributeFlags) ;

constexpr int32_t const& __cordl_internal_get_uxmlAssetId() const;

constexpr int32_t& __cordl_internal_get_uxmlAssetId() ;

constexpr void __cordl_internal_set_uxmlAssetId(int32_t  value) ;

/// @brief Method .ctor, addr 0xb7b8bb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags getStaticF_s_CurrentDeserializeFlags() ;

static inline void setStaticF_s_CurrentDeserializeFlags(::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UxmlSerializedData(UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UxmlSerializedData(UxmlSerializedData const& ) = delete;

/// @brief Field AttributeFlagSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  AttributeFlagSuffix{u"_UxmlAttributeFlags"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{8418};

/// @brief Field k_DefaultFlags value: U8(1)
static ::GlobalNamespace::UxmlSerializedData_UxmlAttributeFlags const k_DefaultFlags;

/// [HideInInspector]
/// [UxmlIgnore]
/// [VisibleToOtherModules(new[] { "UnityEditor.UIBuilderModule" })]
/// [SerializeField]
/// @brief Field uxmlAssetId, offset: 0x10, size: 0x4, def value: None
 int32_t  ___uxmlAssetId;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UxmlSerializedData, ___uxmlAssetId) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::UxmlSerializedData) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::UIElements
