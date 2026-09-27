#pragma once
// IWYU pragma private; include "GlobalNamespace/ContextLog.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ContextLog)
// Forward declare root types
namespace GlobalNamespace {
class ContextLog;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ContextLog*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ContextLog*, "", "ContextLog");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ContextLog
class CORDL_TYPE ContextLog : public ::System::Object {
public:
// Declarations
/// @brief Method GetPrefix, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::StringW GetPrefix(::by_ref<T>  ctx) ;

/// [Extension]
/// @brief Method Log, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void Log(T0  ctx, T1  arg1) ;

/// [Extension]
/// @brief Method LogCall, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T0,typename T1>
static inline void LogCall(T0  ctx, T1  arg1, /* [CallerMemberName] */ ::StringW  call) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContextLog() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContextLog", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ContextLog(ContextLog && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContextLog", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContextLog(ContextLog const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2795};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ContextLog) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
