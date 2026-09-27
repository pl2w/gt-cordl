#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedStatic_1)
// Forward declare root types
namespace Unity::Burst {
template<typename T>
struct SharedStatic_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Burst::SharedStatic_1);
DEFINE_IL2CPP_GEN_CLASS(::Unity::Burst::SharedStatic_1, "Unity.Burst", "SharedStatic`1");
// [IsReadOnly]
// Dependencies 
namespace Unity::Burst {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Unity.Burst.SharedStatic`1<T>
struct CORDL_TYPE SharedStatic_1 {
public:
// Declarations
 __declspec(property(get=get_Data)) T  Data;

/// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TContext>
static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreate(uint32_t  alignment) ;

/// @brief Method GetOrCreateUnsafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreateUnsafe(uint32_t  alignment, int64_t  hashCode, int64_t  subHashCode) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(void*  buffer) ;

/// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::by_ref<T> get_Data() ;

// Ctor Parameters []
// @brief default ctor
constexpr SharedStatic_1() ;

// Ctor Parameters [CppParam { name: "_buffer", ty: "void*", modifiers: "", def_value: None, comment: None }]
constexpr SharedStatic_1(void*  _buffer) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32188};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
 void*  _buffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Unity::Burst
