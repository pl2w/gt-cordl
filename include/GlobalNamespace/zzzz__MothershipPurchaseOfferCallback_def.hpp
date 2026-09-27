#pragma once
// IWYU pragma private; include "GlobalNamespace/MothershipPurchaseOfferCallback.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PurchaseOfferRequestCompleteDelegateWrapper_def.hpp"
CORDL_MODULE_EXPORT(MothershipPurchaseOfferCallback)
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
class MothershipPurchaseOfferCallback;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MothershipPurchaseOfferCallback*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MothershipPurchaseOfferCallback*, "", "MothershipPurchaseOfferCallback");
// Dependencies PurchaseOfferRequestCompleteDelegateWrapper
namespace GlobalNamespace {
// Is value type: false
// CS Name: MothershipPurchaseOfferCallback
class CORDL_TYPE MothershipPurchaseOfferCallback : public ::GlobalNamespace::PurchaseOfferRequestCompleteDelegateWrapper {
public:
// Declarations
static inline ::GlobalNamespace::MothershipPurchaseOfferCallback* New_ctor() ;

/// @brief Method OnCompleteCallback, addr 0x53be948, size 0x18c, virtual true, abstract: false, final false
inline void OnCompleteCallback(::GlobalNamespace::MothershipResponse*  response, bool  wasSuccess, ::GlobalNamespace::MothershipError*  error, ::System::IntPtr  userData) ;

/// @brief Method .ctor, addr 0x53be8e8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MothershipPurchaseOfferCallback() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferCallback", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MothershipPurchaseOfferCallback(MothershipPurchaseOfferCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MothershipPurchaseOfferCallback", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MothershipPurchaseOfferCallback(MothershipPurchaseOfferCallback const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{9754};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::MothershipPurchaseOfferCallback) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
