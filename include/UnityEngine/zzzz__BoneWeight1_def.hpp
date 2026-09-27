#pragma once
// IWYU pragma private; include "UnityEngine/BoneWeight1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BoneWeight1)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct BoneWeight1;
}
// Write type traits
MARK_VAL_T(::UnityEngine::BoneWeight1);
DEFINE_IL2CPP_CLASS(::UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
// [UsedByNativeCode]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.BoneWeight1
struct CORDL_TYPE BoneWeight1 {
public:
// Declarations
 __declspec(property(get=get_boneIndex, put=set_boneIndex)) int32_t  boneIndex;

 __declspec(property(get=get_weight, put=set_weight)) float_t  weight;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::BoneWeight1>*() ;

/// @brief Method Equals, addr 0xb5b1be8, size 0x7c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method Equals, addr 0xb5b1c64, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::BoneWeight1  other) ;

/// @brief Method GetHashCode, addr 0xb5b1cc4, size 0x4c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method get_boneIndex, addr 0xb5b1bd8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_boneIndex() ;

/// @brief Method get_weight, addr 0xb5b1bc8, size 0x8, virtual false, abstract: false, final false
inline float_t get_weight() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::BoneWeight1>"
constexpr ::System::IEquatable_1<::UnityEngine::BoneWeight1>* i___System__IEquatable_1___UnityEngine__BoneWeight1_() ;

/// @brief Method set_boneIndex, addr 0xb5b1be0, size 0x8, virtual false, abstract: false, final false
inline void set_boneIndex(int32_t  value) ;

/// @brief Method set_weight, addr 0xb5b1bd0, size 0x8, virtual false, abstract: false, final false
inline void set_weight(float_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr BoneWeight1() ;

// Ctor Parameters [CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_BoneIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BoneWeight1(float_t  m_Weight, int32_t  m_BoneIndex) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14947};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field m_Weight, offset: 0x0, size: 0x4, def value: None
 float_t  m_Weight;

/// [SerializeField]
/// @brief Field m_BoneIndex, offset: 0x4, size: 0x4, def value: None
 int32_t  m_BoneIndex;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::BoneWeight1, m_Weight) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::BoneWeight1, m_BoneIndex) == 0x4, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::BoneWeight1) == 0x8, "Size mismatch!");

} // namespace end def UnityEngine
