#pragma once
// IWYU pragma private; include "GlobalNamespace/StateHash.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StateHash)
// Forward declare root types
namespace GlobalNamespace {
struct StateHash;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::StateHash);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::StateHash, "", "StateHash");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: StateHash
struct CORDL_TYPE StateHash {
public:
// Declarations
/// @brief Method Changed, addr 0x5a21194, size 0x1c, virtual false, abstract: false, final false
inline bool Changed() ;

/// @brief Method GetHashCode, addr 0x5a210fc, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0>
inline void Poll(T0  v0) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
inline void Poll(T1  v1, T2  v2) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
inline void Poll(T1  v1, T2  v2, T3  v3) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14, T15  v15) ;

/// @brief Method Poll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15,typename T16>
inline void Poll(T1  v1, T2  v2, T3  v3, T4  v4, T5  v5, T6  v6, T7  v7, T8  v8, T9  v9, T10  v10, T11  v11, T12  v12, T13  v13, T14  v14, T15  v15, T16  v16) ;

/// @brief Method ToString, addr 0x5a21170, size 0x24, virtual true, abstract: false, final false
inline ::StringW ToString() ;

// Ctor Parameters []
// @brief default ctor
constexpr StateHash() ;

// Ctor Parameters [CppParam { name: "last", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "next", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr StateHash(int32_t  last, int32_t  next) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2840};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field last, offset: 0x0, size: 0x4, def value: None
 int32_t  last;

/// @brief Field next, offset: 0x4, size: 0x4, def value: None
 int32_t  next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::StateHash, last) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::StateHash, next) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::StateHash) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
