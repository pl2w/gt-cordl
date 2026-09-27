#pragma once
// IWYU pragma private; include "Fusion/NetworkSceneLoadId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkSceneLoadId)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
struct NetworkSceneLoadId;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkSceneLoadId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkSceneLoadId, "Fusion", "NetworkSceneLoadId");
// [IsReadOnly]
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkSceneLoadId
#pragma pack(push, 1)
struct CORDL_TYPE NetworkSceneLoadId {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkSceneLoadId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkSceneLoadId>*() ;

/// @brief Method Equals, addr 0x5fde43c, size 0x78, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5fde42c, size 0x10, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkSceneLoadId  other) ;

/// @brief Method GetHashCode, addr 0x5fde4b4, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5fde4e0, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5fde424, size 0x8, virtual false, abstract: false, final false
inline void _ctor(uint8_t  value) ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkSceneLoadId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkSceneLoadId>* i___System__IEquatable_1___Fusion__NetworkSceneLoadId_() ;

/// @brief Method op_Equality, addr 0x5fde4bc, size 0x10, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkSceneLoadId  left, ::Fusion::NetworkSceneLoadId  right) ;

/// @brief Method op_Implicit, addr 0x5fde4dc, size 0x4, virtual false, abstract: false, final false
static inline ::Fusion::NetworkSceneLoadId op_Implicit___Fusion__NetworkSceneLoadId(uint8_t  value) ;

/// @brief Method op_Inequality, addr 0x5fde4cc, size 0x10, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkSceneLoadId  left, ::Fusion::NetworkSceneLoadId  right) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkSceneLoadId() ;

// Ctor Parameters [CppParam { name: "Value", ty: "uint8_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkSceneLoadId(uint8_t  Value) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19285};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field Value, offset: 0x0, size: 0x1, def value: None
 uint8_t  Value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(offsetof(::Fusion::NetworkSceneLoadId, Value) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::NetworkSceneLoadId) == 0x1, "Size mismatch!");

} // namespace end def Fusion
