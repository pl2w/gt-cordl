#pragma once
// IWYU pragma private; include "Fusion/LogUtils_DumpDeferredClass.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(LogUtils_DumpDeferredClass)
namespace Fusion {
class ILogDumpable;
}
// Forward declare root types
namespace GlobalNamespace {
struct LogUtils_DumpDeferredClass;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LogUtils_DumpDeferredClass);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LogUtils_DumpDeferredClass, "Fusion", "LogUtils/DumpDeferredClass");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.LogUtils/DumpDeferredClass
struct CORDL_TYPE LogUtils_DumpDeferredClass {
public:
// Declarations
/// @brief Method ToString, addr 0x5f46b70, size 0x10c, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x5f46b68, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::Fusion::ILogDumpable*  obj) ;

// Ctor Parameters []
// @brief default ctor
constexpr LogUtils_DumpDeferredClass() ;

// Ctor Parameters [CppParam { name: "Obj", ty: "::Fusion::ILogDumpable*", modifiers: "", def_value: None, comment: None }]
constexpr LogUtils_DumpDeferredClass(::Fusion::ILogDumpable*  Obj) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32735};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Obj, offset: 0x0, size: 0x8, def value: None
 ::Fusion::ILogDumpable*  Obj;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LogUtils_DumpDeferredClass, Obj) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LogUtils_DumpDeferredClass) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
