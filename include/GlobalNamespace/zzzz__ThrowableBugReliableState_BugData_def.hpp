#pragma once
// IWYU pragma private; include "GlobalNamespace/ThrowableBugReliableState_BugData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ThrowableBugReliableState_BugData)
namespace Fusion {
class INetworkStruct;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct ThrowableBugReliableState_BugData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ThrowableBugReliableState_BugData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ThrowableBugReliableState_BugData, "", "ThrowableBugReliableState/BugData");
// [NetworkStructWeaved(3)]
// Dependencies Fusion.CodeGen.FixedStorage@3
namespace GlobalNamespace {
// Is value type: true
// CS Name: ThrowableBugReliableState/BugData
#pragma pack(push, 0)
struct CORDL_TYPE ThrowableBugReliableState_BugData {
public:
// Declarations
/// @brief Field _tDirection, offset 0x0, size 0xc 
 __declspec(property(get=__cordl_internal_get__tDirection, put=__cordl_internal_set__tDirection)) ::Fusion::CodeGen::FixedStorage@3  _tDirection;

/// [Networked]
/// @brief [NetworkedWeaved(0, 3)]
 __declspec(property(get=get_tDirection, put=set_tDirection)) ::UnityEngine::Vector3  tDirection;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@3 const& __cordl_internal_get__tDirection() const;

constexpr ::Fusion::CodeGen::FixedStorage@3& __cordl_internal_get__tDirection() ;

constexpr void __cordl_internal_set__tDirection(::Fusion::CodeGen::FixedStorage@3  value) ;

/// @brief Method .ctor, addr 0x5b3429c, size 0x5c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  dir) ;

/// [IsReadOnly]
/// @brief Method get_tDirection, addr 0x5b34350, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 get_tDirection() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_tDirection, addr 0x5b347a4, size 0x5c, virtual false, abstract: false, final false
inline void set_tDirection(::UnityEngine::Vector3  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr ThrowableBugReliableState_BugData() ;

// Ctor Parameters [CppParam { name: "_tDirection", ty: "::Fusion::CodeGen::FixedStorage@3", modifiers: "", def_value: None, comment: None }]
constexpr ThrowableBugReliableState_BugData(::Fusion::CodeGen::FixedStorage@3  _tDirection) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____tDirection_padding[0x0];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _tDirection, offset: 0x0, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____tDirection;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____tDirection_padding_forAlignment[0x0];
/// [FixedBufferProperty(typeof(UnityEngine.Vector3), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterVector3), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _tDirection, offset: 0x0, size: 0xc, def value: None
 ::Fusion::CodeGen::FixedStorage@3  ____tDirection_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3669};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ThrowableBugReliableState_BugData) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
