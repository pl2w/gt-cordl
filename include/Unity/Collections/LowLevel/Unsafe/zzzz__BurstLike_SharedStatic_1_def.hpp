#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstLike_SharedStatic_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstLike_SharedStatic_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct BurstLike_SharedStatic_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::BurstLike_SharedStatic_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::BurstLike_SharedStatic_1, "Unity.Collections.LowLevel.Unsafe", "BurstLike/SharedStatic`1");
// [VisibleToOtherModules(new[] { "UnityEngine.ParticleSystemModule" })]
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Collections.LowLevel.Unsafe.BurstLike/SharedStatic`1<T>
struct CORDL_TYPE BurstLike_SharedStatic_1 {
public:
// Declarations
 __declspec(property(get=get_Data)) T  Data;

/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContext>
static inline ::GlobalNamespace::BurstLike_SharedStatic_1<T> GetOrCreate(uint32_t  alignment) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(void*  buffer) ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Data() ;

// Ctor Parameters []
// @brief default ctor
constexpr BurstLike_SharedStatic_1() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr BurstLike_SharedStatic_1(void*  _buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
 void*  _buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
