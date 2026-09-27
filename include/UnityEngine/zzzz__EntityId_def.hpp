#pragma once
// IWYU pragma private; include "UnityEngine/EntityId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntityId)
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct EntityId;
}
// Write type traits
MARK_VAL_T(::UnityEngine::EntityId);
DEFINE_IL2CPP_CLASS(::UnityEngine::EntityId, "UnityEngine", "EntityId");
// [NativeClass("EntityId")]
// [UsedByNativeCode]
// Dependencies 
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.EntityId
#pragma pack(push, 0)
struct CORDL_TYPE EntityId {
public:
// Declarations
/// @brief Convert operator to "::System::IComparable_1<::UnityEngine::EntityId>"
constexpr operator  ::System::IComparable_1<::UnityEngine::EntityId>*() ;

/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::EntityId>"
constexpr operator  ::System::IEquatable_1<::UnityEngine::EntityId>*() ;

/// @brief Method CompareTo, addr 0xb5e6d1c, size 0x8, virtual true, abstract: false, final true
inline int32_t CompareTo(::UnityEngine::EntityId  other) ;

/// @brief Method Equals, addr 0xb5e6c94, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0xb5e6d0c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::UnityEngine::EntityId  other) ;

/// @brief Method GetHashCode, addr 0xb5e6d24, size 0x68, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0xb5e6d90, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_None, addr 0xb5e6c8c, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::EntityId get_None() ;

/// @brief Convert to "::System::IComparable_1<::UnityEngine::EntityId>"
constexpr ::System::IComparable_1<::UnityEngine::EntityId>* i___System__IComparable_1___UnityEngine__EntityId_() ;

/// @brief Convert to "::System::IEquatable_1<::UnityEngine::EntityId>"
constexpr ::System::IEquatable_1<::UnityEngine::EntityId>* i___System__IEquatable_1___UnityEngine__EntityId_() ;

/// @brief Method op_Implicit, addr 0xb5d6f78, size 0x4, virtual false, abstract: false, final false
static inline ::UnityEngine::EntityId op_Implicit___UnityEngine__EntityId(int32_t  intValue) ;

/// @brief Method op_Implicit, addr 0xb5e6d8c, size 0x4, virtual false, abstract: false, final false
static inline int32_t op_Implicit_int32_t(::UnityEngine::EntityId  entityId) ;

// Ctor Parameters []
// @brief default ctor
constexpr EntityId() ;

// Ctor Parameters [CppParam { name: "m_Data", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EntityId(int32_t  m_Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15112};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// [SerializeField]
/// @brief Field m_Data, offset: 0x0, size: 0x4, def value: None
 int32_t  m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::UnityEngine::EntityId, m_Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::EntityId) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine
