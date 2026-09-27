#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipGetStorefrontCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GetStorefrontRequestCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipGetStorefrontCallback)
namespace GlobalNamespace {
class MothershipError;
}
namespace GlobalNamespace {
class MothershipResponse;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace GlobalNamespace {
class MothershipGetStorefrontCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipGetStorefrontCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipGetStorefrontCallback*, "", "MothershipGetStorefrontCallback");
// Dependencies GetStorefrontRequestCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipGetStorefrontCallback
class CORDL_TYPE MothershipGetStorefrontCallback : public ::GlobalNamespace::GetStorefrontRequestCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipGetStorefrontCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53be75c, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53be6fc, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipGetStorefrontCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetStorefrontCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipGetStorefrontCallback(MothershipGetStorefrontCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipGetStorefrontCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipGetStorefrontCallback(MothershipGetStorefrontCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipGetStorefrontCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
