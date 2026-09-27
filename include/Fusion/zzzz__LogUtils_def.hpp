#pragma once
// IWYU pragma private; include "Fusion/LogUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__ILogDumpable_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LogUtils)
namespace GlobalNamespace {
struct LogUtils_DumpDeferredClass;
}
namespace GlobalNamespace {
template<typename T>
struct LogUtils_DumpDeferredPtr_1;
}
// Forward declare root types
namespace Fusion {
class LogUtils;
}
// Write type traits
MARK_REF_T(::Fusion::LogUtils*);
DEFINE_IL2CPP_CLASS(::Fusion::LogUtils*, "Fusion", "LogUtils");
// Dependencies Fusion.ILogDumpable, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.LogUtils
class CORDL_TYPE LogUtils : public ::System::Object {
public:
// Declarations
using DumpDeferredClass = ::GlobalNamespace::LogUtils_DumpDeferredClass;

template<typename T>
using DumpDeferredPtr_1 = ::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T>;

/// @brief Method GetDump, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::ILogDumpable*> && ::cordl_internals::reference_type_constraint<T>)
static inline ::GlobalNamespace::LogUtils_DumpDeferredClass GetDump(T  obj) ;

/// @brief Method GetDump, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::ILogDumpable*> && ::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline ::GlobalNamespace::LogUtils_DumpDeferredPtr_1<T> GetDump(T*  ptr) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LogUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LogUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LogUtils(LogUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LogUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LogUtils(LogUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32736};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::LogUtils) == 0x10, "Size mismatch!");

} // namespace end def Fusion
