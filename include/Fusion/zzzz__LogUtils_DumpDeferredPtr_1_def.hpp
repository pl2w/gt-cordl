#pragma once
// IWYU pragma private; include "Fusion/LogUtils_DumpDeferredPtr_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogUtils_DumpDeferredPtr_1)
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
struct LogUtils_DumpDeferredPtr_1;
}
// Write type traits
MARK_GEN_VAL_T(::GlobalNamespace::LogUtils_DumpDeferredPtr_1);
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::LogUtils_DumpDeferredPtr_1, "Fusion", "LogUtils/DumpDeferredPtr`1");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: true
// CS Name: Fusion.LogUtils/DumpDeferredPtr`1<T>
struct CORDL_TYPE LogUtils_DumpDeferredPtr_1 {
public:
// Declarations
/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(T*  ptr) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogUtils_DumpDeferredPtr_1() ;

// Ctor Parameters [CppParam { name: "_ptr_P", ty: "T*", modifiers: "", def_value: None, comment: None }]
constexpr LogUtils_DumpDeferredPtr_1(T*  _ptr_P) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32734};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [CompilerGenerated]
/// @brief Field <ptr>P, offset: 0x0, size: 0x8, def value: None
 T*  _ptr_P;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
