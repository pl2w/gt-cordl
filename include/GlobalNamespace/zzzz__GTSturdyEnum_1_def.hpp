#pragma once
// IWYU pragma private; include "GlobalNamespace/GTSturdyEnum_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTSturdyEnum`1_EnumPair_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(GTSturdyEnum_1)
namespace GlobalNamespace {
template<typename TEnum>
struct GTSturdyEnum_1_EnumPair;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TEnum>
struct GTSturdyEnum_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::GTSturdyEnum_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::GTSturdyEnum_1, "", "GTSturdyEnum`1");
// Dependencies GTSturdyEnum`1::EnumPair<TEnum>
namespace GlobalNamespace {
// cpp template
template<typename TEnum>
// Is value type: true
// CS Name: GTSturdyEnum`1<TEnum>
struct CORDL_TYPE GTSturdyEnum_1 {
public:
// Declarations
using EnumPair = ::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>;

 __declspec(property(get=get_Value, put=set_Value)) TEnum  Value;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() ;

/// @brief Method OnAfterDeserialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnAfterDeserialize() ;

/// @brief Method OnBeforeSerialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnBeforeSerialize() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TEnum get_Value() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline TEnum op_Implicit_TEnum(::GlobalNamespace::GTSturdyEnum_1<TEnum>  sturdyEnum) ;

/// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTSturdyEnum_1<TEnum> op_Implicit___GlobalNamespace__GTSturdyEnum_1_TEnum_(TEnum  value) ;

/// [CompilerGenerated]
/// @brief Method set_Value, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Value(TEnum  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTSturdyEnum_1() ;

// Ctor Parameters [CppParam { name: "_Value_k__BackingField", ty: "TEnum", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_stringValuePairs", ty: "::ArrayW<::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>>", modifiers: "", def_value: None, comment: None }]
constexpr GTSturdyEnum_1(TEnum  _Value_k__BackingField, ::ArrayW<::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>>  m_stringValuePairs) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2814};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [CompilerGenerated]
/// @brief Field <Value>k__BackingField, offset: 0x0, size: 0x8, def value: None
 TEnum  _Value_k__BackingField;

/// [SerializeField]
/// @brief Field m_stringValuePairs, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::GTSturdyEnum_1_EnumPair<TEnum>>  m_stringValuePairs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
