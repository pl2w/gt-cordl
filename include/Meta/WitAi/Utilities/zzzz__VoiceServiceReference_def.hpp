#pragma once
// IWYU pragma private; include "Meta/WitAi/Utilities/VoiceServiceReference.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VoiceServiceReference)
namespace Meta::WitAi::Utilities {
class VoiceServiceReference___c;
}
namespace Meta::WitAi {
class VoiceService;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace Meta::WitAi::Utilities {
class VoiceServiceReference___c;
}
namespace Meta::WitAi::Utilities {
struct VoiceServiceReference;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Utilities::VoiceServiceReference___c*);
MARK_VAL_T(::Meta::WitAi::Utilities::VoiceServiceReference);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::VoiceServiceReference___c*, "Meta.WitAi.Utilities", "VoiceServiceReference/<>c");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Utilities::VoiceServiceReference, "Meta.WitAi.Utilities", "VoiceServiceReference");
// Dependencies 
namespace Meta::WitAi::Utilities {
// Is value type: true
// CS Name: Meta.WitAi.Utilities.VoiceServiceReference
struct CORDL_TYPE VoiceServiceReference {
public:
// Declarations
using __c = ::Meta::WitAi::Utilities::VoiceServiceReference___c;

 __declspec(property(get=get_VoiceService)) ::UnityW<::Meta::WitAi::VoiceService>  VoiceService;

/// @brief Method get_VoiceService, addr 0x9e84ec0, size 0x16c, virtual false, abstract: false, final false
inline ::UnityW<::Meta::WitAi::VoiceService> get_VoiceService() ;

// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceReference() ;

// Ctor Parameters [CppParam { name: "voiceService", ty: "::UnityW<::Meta::WitAi::VoiceService>", modifiers: "", def_value: None, comment: None }]
constexpr VoiceServiceReference(::UnityW<::Meta::WitAi::VoiceService>  voiceService) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25584};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// [SerializeField]
/// @brief Field voiceService, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::VoiceService>  voiceService;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Utilities::VoiceServiceReference, voiceService) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Utilities::VoiceServiceReference) == 0x8, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Utilities {
// Is value type: false
// CS Name: Meta.WitAi.Utilities.VoiceServiceReference/<>c
class CORDL_TYPE VoiceServiceReference___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Meta::WitAi::Utilities::VoiceServiceReference___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*  __9__2_0;

static inline ::Meta::WitAi::Utilities::VoiceServiceReference___c* New_ctor() ;

/// @brief Method .ctor, addr 0x9e85094, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_VoiceService>b__2_0, addr 0x9e8509c, size 0x48, virtual false, abstract: false, final false
inline bool _get_VoiceService_b__2_0(::Meta::WitAi::VoiceService*  o) ;

static inline ::Meta::WitAi::Utilities::VoiceServiceReference___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Meta::WitAi::Utilities::VoiceServiceReference___c*  value) ;

static inline void setStaticF___9__2_0(::System::Predicate_1<::UnityW<::Meta::WitAi::VoiceService>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VoiceServiceReference___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceReference___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VoiceServiceReference___c(VoiceServiceReference___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VoiceServiceReference___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VoiceServiceReference___c(VoiceServiceReference___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Meta::WitAi::Utilities::VoiceServiceReference___c) == 0x10, "Size mismatch!");

} // namespace end def Meta::WitAi::Utilities
