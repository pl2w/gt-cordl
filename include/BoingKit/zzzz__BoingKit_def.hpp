#pragma once
// IWYU pragma private; include "BoingKit/BoingKit.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BoingKit/zzzz__Version_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BoingKit)
// Forward declare root types
namespace BoingKit {
class BoingKit;
}
// Write type traits
MARK_REF_T(::BoingKit::BoingKit*);
DEFINE_IL2CPP_CLASS(::BoingKit::BoingKit*, "BoingKit", "BoingKit");
// Dependencies BoingKit.Version, System.Object
namespace BoingKit {
// Is value type: false
// CS Name: BoingKit.BoingKit
class CORDL_TYPE BoingKit : public ::System::Object {
public:
// Declarations
/// @brief Field Version, offset 0xffffffff, size 0xc 
 __declspec(property(get=getStaticF_Version, put=setStaticF_Version)) ::BoingKit::Version  Version;

static inline ::BoingKit::Version getStaticF_Version() ;

static inline void setStaticF_Version(::BoingKit::Version  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoingKit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoingKit", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BoingKit(BoingKit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoingKit", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoingKit(BoingKit const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5173};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::BoingKit::BoingKit) == 0x10, "Size mismatch!");

} // namespace end def BoingKit
