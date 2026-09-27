#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/GPUInstanceIndex.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GPUInstanceIndex)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct GPUInstanceIndex;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::GPUInstanceIndex);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::GPUInstanceIndex, "UnityEngine.Rendering", "GPUInstanceIndex");
// Dependencies 
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.GPUInstanceIndex
struct CORDL_TYPE GPUInstanceIndex {
public:
// Declarations
/// @brief Field Invalid, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Invalid, put=setStaticF_Invalid)) ::UnityEngine::Rendering::GPUInstanceIndex  Invalid;

 __declspec(property(get=get_index, put=set_index)) int32_t  index;

/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr operator  ::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>*() ;

/// @brief Method CompareTo, addr 0xb1fe150, size 0x78, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::Rendering::GPUInstanceIndex  other) ;

/// @brief Method Equals, addr 0xb1fe0e8, size 0x68, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::Rendering::GPUInstanceIndex  other) ;

/// @brief Method GetHashCode, addr 0xb1fe1c8, size 0x54, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::UnityEngine::Rendering::GPUInstanceIndex getStaticF_Invalid() ;

/// [IsReadOnly]
/// [CompilerGenerated]
/// @brief Method get_index, addr 0xb1fe0d8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_index() ;

/// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr ::System::IComparable_1<::UnityEngine::Rendering::GPUInstanceIndex>* i___System__IComparable_1___UnityEngine__Rendering__GPUInstanceIndex_() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::GPUInstanceIndex>* i___System__IEquatable_1___UnityEngine__Rendering__GPUInstanceIndex_() ;

static inline void setStaticF_Invalid(::UnityEngine::Rendering::GPUInstanceIndex  value) ;

/// [CompilerGenerated]
/// @brief Method set_index, addr 0xb1fe0e0, size 0x8, virtual false, abstract: false, final false
inline void set_index(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr GPUInstanceIndex() ;

// Ctor Parameters [CppParam { name: "_index_k__BackingField", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GPUInstanceIndex(int32_t  _index_k__BackingField) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{26619};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [CompilerGenerated]
/// @brief Field <index>k__BackingField, offset: 0x0, size: 0x4, def value: None
 int32_t  _index_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::GPUInstanceIndex, _index_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::GPUInstanceIndex) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
