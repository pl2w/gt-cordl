#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MatsAndGOs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MatsAndGOs)
namespace DigitalOpus::MB::Core {
class MatAndTransformToMerged;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace DigitalOpus::MB::Core {
class MatsAndGOs;
}
// Write type traits
MARK_REF_T(::DigitalOpus::MB::Core::MatsAndGOs*);
DEFINE_IL2CPP_CLASS(::DigitalOpus::MB::Core::MatsAndGOs*, "DigitalOpus.MB.Core", "MatsAndGOs");
// Dependencies System.Object
namespace DigitalOpus::MB::Core {
// Is value type: false
// CS Name: DigitalOpus.MB.Core.MatsAndGOs
class CORDL_TYPE MatsAndGOs : public ::System::Object {
public:
// Declarations
/// @brief Field gos, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_gos, put=__cordl_internal_set_gos)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  gos;

/// @brief Field mats, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_mats, put=__cordl_internal_set_mats)) ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*  mats;

static inline ::DigitalOpus::MB::Core::MatsAndGOs* New_ctor() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_gos() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_gos() ;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>* const& __cordl_internal_get_mats() const;

constexpr ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*& __cordl_internal_get_mats() ;

constexpr void __cordl_internal_set_gos(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_mats(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*  value) ;

/// @brief Method .ctor, addr 0x9dce7cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MatsAndGOs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MatsAndGOs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MatsAndGOs(MatsAndGOs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MatsAndGOs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MatsAndGOs(MatsAndGOs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{22780};

/// @brief Field mats, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::MatAndTransformToMerged*>*  ___mats;

/// @brief Field gos, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ___gos;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::DigitalOpus::MB::Core::MatsAndGOs, ___mats) == 0x10, "Offset mismatch!");

static_assert(offsetof(::DigitalOpus::MB::Core::MatsAndGOs, ___gos) == 0x18, "Offset mismatch!");

static_assert(sizeof(::DigitalOpus::MB::Core::MatsAndGOs) == 0x20, "Size mismatch!");

} // namespace end def DigitalOpus::MB::Core
