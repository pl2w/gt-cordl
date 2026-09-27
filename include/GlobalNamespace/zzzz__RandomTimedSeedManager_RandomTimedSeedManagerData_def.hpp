#pragma once
// IWYU pragma private; include "GlobalNamespace/RandomTimedSeedManager_RandomTimedSeedManagerData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/CodeGen/zzzz__FixedStorage@1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RandomTimedSeedManager_RandomTimedSeedManagerData)
namespace Fusion {
class INetworkStruct;
}
// Forward declare root types
namespace GlobalNamespace {
struct RandomTimedSeedManager_RandomTimedSeedManagerData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData, "", "RandomTimedSeedManager/RandomTimedSeedManagerData");
// [NetworkStructWeaved(2)]
// Dependencies Fusion.CodeGen.FixedStorage@1
namespace GlobalNamespace {
// Is value type: true
// CS Name: RandomTimedSeedManager/RandomTimedSeedManagerData
#pragma pack(push, 0)
struct CORDL_TYPE RandomTimedSeedManager_RandomTimedSeedManagerData {
public:
// Declarations
/// @brief Field _currentSyncTime, offset 0x4, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentSyncTime, put=__cordl_internal_set__currentSyncTime)) ::Fusion::CodeGen::FixedStorage@1  _currentSyncTime;

/// @brief Field _seed, offset 0x0, size 0x4 
 __declspec(property(get=__cordl_internal_get__seed, put=__cordl_internal_set__seed)) ::Fusion::CodeGen::FixedStorage@1  _seed;

/// [Networked]
/// @brief [NetworkedWeaved(1, 1)]
 __declspec(property(get=get_currentSyncTime, put=set_currentSyncTime)) float_t  currentSyncTime;

/// [Networked]
/// @brief [NetworkedWeaved(0, 1)]
 __declspec(property(get=get_seed, put=set_seed)) int32_t  seed;

/// @brief Convert operator to "::Fusion::INetworkStruct"
constexpr operator  ::Fusion::INetworkStruct*() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__currentSyncTime() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__currentSyncTime() ;

constexpr ::Fusion::CodeGen::FixedStorage@1 const& __cordl_internal_get__seed() const;

constexpr ::Fusion::CodeGen::FixedStorage@1& __cordl_internal_get__seed() ;

constexpr void __cordl_internal_set__currentSyncTime(::Fusion::CodeGen::FixedStorage@1  value) ;

constexpr void __cordl_internal_set__seed(::Fusion::CodeGen::FixedStorage@1  value) ;

/// @brief Method .ctor, addr 0x5693690, size 0x70, virtual false, abstract: false, final false
inline void _ctor(int32_t  seed, float_t  currentSyncTime) ;

/// [IsReadOnly]
/// @brief Method get_currentSyncTime, addr 0x56937c0, size 0x3c, virtual false, abstract: false, final false
inline float_t get_currentSyncTime() ;

/// [IsReadOnly]
/// @brief Method get_seed, addr 0x5693784, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_seed() ;

/// @brief Convert to "::Fusion::INetworkStruct"
constexpr ::Fusion::INetworkStruct* i___Fusion__INetworkStruct() ;

/// @brief Method set_currentSyncTime, addr 0x5693ca0, size 0x48, virtual false, abstract: false, final false
inline void set_currentSyncTime(float_t  value) ;

/// @brief Method set_seed, addr 0x5693c60, size 0x40, virtual false, abstract: false, final false
inline void set_seed(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RandomTimedSeedManager_RandomTimedSeedManagerData() ;

// Ctor Parameters [CppParam { name: "_seed", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }, CppParam { name: "_currentSyncTime", ty: "::Fusion::CodeGen::FixedStorage@1", modifiers: "", def_value: None, comment: None }]
constexpr RandomTimedSeedManager_RandomTimedSeedManagerData(::Fusion::CodeGen::FixedStorage@1  _seed, ::Fusion::CodeGen::FixedStorage@1  _currentSyncTime) noexcept;

private:
/// @brief Explicitly laid out type with union based offsets
union {
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x0
 uint8_t  ____seed_padding[0x0];
/// [FixedBufferProperty(typeof(System.Int32), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterInt32), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _seed, offset: 0x0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____seed;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x0 for alignment
 uint8_t  ____seed_padding_forAlignment[0x0];
/// [FixedBufferProperty(typeof(System.Int32), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterInt32), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _seed, offset: 0x0, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____seed_forAlignment;
};
#pragma pack(push, tp, 1)
struct  {
/// @brief Padding field 0x4
 uint8_t  ____currentSyncTime_padding[0x4];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentSyncTime, offset: 0x4, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____currentSyncTime;
};
#pragma pack(pop, tp)
struct  {
/// @brief Padding field 0x4 for alignment
 uint8_t  ____currentSyncTime_padding_forAlignment[0x4];
/// [FixedBufferProperty(typeof(System.Single), typeof(Fusion.CodeGen.UnityValueSurrogate@ElementReaderWriterSingle), 0, order = -2147483647)]
/// [WeaverGenerated]
/// [SerializeField]
/// @brief Field _currentSyncTime, offset: 0x4, size: 0x4, def value: None
 ::Fusion::CodeGen::FixedStorage@1  ____currentSyncTime_forAlignment;
};
};
public:

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{887};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::RandomTimedSeedManager_RandomTimedSeedManagerData) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
