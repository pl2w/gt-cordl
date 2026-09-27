#pragma once
// IWYU pragma private; include "Fusion/FusionMppm.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/zzzz__FusionMppmCommand_def.hpp"
#include "Fusion/zzzz__FusionMppmStatus_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FusionMppm)
// Forward declare root types
namespace Fusion {
class FusionMppm;
}
// Write type traits
MARK_REF_T(::Fusion::FusionMppm*);
DEFINE_IL2CPP_CLASS(::Fusion::FusionMppm*, "Fusion", "FusionMppm");
// Dependencies Fusion.FusionMppmCommand, Fusion.FusionMppmStatus, System.Object
namespace Fusion {
// Is value type: false
// CS Name: Fusion.FusionMppm
class CORDL_TYPE FusionMppm : public ::System::Object {
public:
// Declarations
/// @brief Field MainEditor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MainEditor, put=setStaticF_MainEditor)) ::Fusion::FusionMppm*  MainEditor;

/// @brief Field Status, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Status, put=setStaticF_Status)) ::Fusion::FusionMppmStatus  Status;

/// [Conditional("UNITY_EDITOR")]
/// [Obsolete("Use FusionMppm.Broadcaster?.Send instead")]
/// @brief Method Broadcast, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::FusionMppmCommand*>)
static inline void Broadcast(T  data) ;

static inline ::Fusion::FusionMppm* New_ctor() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Send, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Fusion::FusionMppmCommand*>)
inline void Send(T  data) ;

/// @brief Method .ctor, addr 0x60e3830, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Fusion::FusionMppm* getStaticF_MainEditor() ;

static inline ::Fusion::FusionMppmStatus getStaticF_Status() ;

static inline void setStaticF_MainEditor(::Fusion::FusionMppm*  value) ;

static inline void setStaticF_Status(::Fusion::FusionMppmStatus  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FusionMppm() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FusionMppm", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FusionMppm(FusionMppm && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FusionMppm", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FusionMppm(FusionMppm const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{23436};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Fusion::FusionMppm) == 0x10, "Size mismatch!");

} // namespace end def Fusion
