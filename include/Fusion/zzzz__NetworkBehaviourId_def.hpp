#pragma once
// IWYU pragma private; include "Fusion/NetworkBehaviourId.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__NetworkId_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetworkBehaviourId)
namespace Fusion {
class INetworkStruct;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Fusion {
struct NetworkBehaviourId;
}
// Write type traits
MARK_VAL_T(::Fusion::NetworkBehaviourId);
DEFINE_IL2CPP_CLASS(::Fusion::NetworkBehaviourId, "Fusion", "NetworkBehaviourId");
// [NetworkStructWeaved(2)]
// Dependencies Fusion.NetworkId
namespace Fusion {
// Is value type: true
// CS Name: Fusion.NetworkBehaviourId
struct CORDL_TYPE NetworkBehaviourId {
public:
// Declarations
/// @brief Field Behaviour, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get_Behaviour, put=__cordl_internal_set_Behaviour)) int32_t  Behaviour;

 __declspec(property(get=get_IsValid)) bool  IsValid;

/// @brief Field Object, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get_Object, put=__cordl_internal_set_Object)) ::Fusion::NetworkId  Object;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

/// @brief Convert operator to "::System::IEquatable_1<::Fusion::NetworkBehaviourId>"
constexpr operator  ::System::IEquatable_1<::Fusion::NetworkBehaviourId>*() ;

/// @brief Method Equals, addr 0x5f832cc, size 0xc0, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x5f8324c, size 0x80, virtual true, abstract: false, final true
inline bool Equals(::Fusion::NetworkBehaviourId  other) ;

/// @brief Method GetHashCode, addr 0x5f80810, size 0x6c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x5f8338c, size 0xa8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr int32_t const& __cordl_internal_get_Behaviour() const;

constexpr int32_t& __cordl_internal_get_Behaviour() ;

constexpr ::Fusion::NetworkId const& __cordl_internal_get_Object() const;

constexpr ::Fusion::NetworkId& __cordl_internal_get_Object() ;

constexpr void __cordl_internal_set_Behaviour(int32_t  value) ;

constexpr void __cordl_internal_set_Object(::Fusion::NetworkId  value) ;

/// @brief Method get_IsValid, addr 0x5f80694, size 0x6c, virtual false, abstract: false, final false
inline bool get_IsValid() ;

/// @brief Method get_None, addr 0x5f83244, size 0x8, virtual false, abstract: false, final false
static inline ::Fusion::NetworkBehaviourId get_None() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Convert to "::System::IEquatable_1<::Fusion::NetworkBehaviourId>"
constexpr ::System::IEquatable_1<::Fusion::NetworkBehaviourId>* i___System__IEquatable_1___Fusion__NetworkBehaviourId_() ;

/// @brief Method op_Equality, addr 0x5f83434, size 0x5c, virtual false, abstract: false, final false
static inline bool op_Equality(::Fusion::NetworkBehaviourId  a, ::Fusion::NetworkBehaviourId  b) ;

/// @brief Method op_Inequality, addr 0x5f83490, size 0x5c, virtual false, abstract: false, final false
static inline bool op_Inequality(::Fusion::NetworkBehaviourId  a, ::Fusion::NetworkBehaviourId  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetworkBehaviourId() ;

// Ctor Parameters [CppParam { name: "Object", ty: "::Fusion::NetworkId", modifiers: "", def_value: None, comment: None }, CppParam { name: "Behaviour", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetworkBehaviourId(::Fusion::NetworkId  Object, int32_t  Behaviour) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ___Object_padding[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ___Object_padding_forAlignment[0x0];
/// @brief Field Object, offset: 0x0, size: 0x4, def value: None
 ::Fusion::NetworkId  ___Object_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ___Behaviour_padding[0x4];
/// @brief Field Behaviour, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Behaviour;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ___Behaviour_padding_forAlignment[0x4];
/// @brief Field Behaviour, offset: 0x4, size: 0x4, def value: None
 int32_t  ___Behaviour_forAlignment;
};
};
public:

/// @brief Field SIZE offset 0xffffffff size 0x4
static constexpr int32_t  SIZE{static_cast<int32_t>(0x8)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18917};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(sizeof(::Fusion::NetworkBehaviourId) == 0x8, "Size mismatch!");

} // namespace end def Fusion
