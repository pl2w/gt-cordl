#pragma once
// IWYU pragma private; include "GlobalNamespace/EchoUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EchoUtils)
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class EchoUtils;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::EchoUtils*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::EchoUtils*, "", "EchoUtils");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EchoUtils
class CORDL_TYPE EchoUtils : public ::System::Object {
public:
// Declarations
/// [Extension]
/// [HideInCallstack]
/// @brief Method Echo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Echo(T  message) ;

/// [Extension]
/// [HideInCallstack]
/// @brief Method Echo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T Echo(T  message, ::UnityEngine::Object*  context) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EchoUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EchoUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
EchoUtils(EchoUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EchoUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
EchoUtils(EchoUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3496};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::EchoUtils) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
