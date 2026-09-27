#pragma once
// IWYU pragma private; include "Oculus/Interaction/UpdateDriverGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateDriverGroup)
namespace Oculus::Interaction {
class IUpdateDriver;
}
namespace Oculus::Interaction {
class UpdateDriverGroup___c;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TInput,typename TOutput>
class Converter_2;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Oculus::Interaction {
class UpdateDriverGroup;
}
namespace Oculus::Interaction {
class UpdateDriverGroup___c;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UpdateDriverGroup*);
MARK_REF_T(::Oculus::Interaction::UpdateDriverGroup___c*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UpdateDriverGroup*, "Oculus.Interaction", "UpdateDriverGroup");
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UpdateDriverGroup___c*, "Oculus.Interaction", "UpdateDriverGroup/<>c");
// Dependencies UnityEngine.MonoBehaviour
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UpdateDriverGroup
class CORDL_TYPE UpdateDriverGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::Oculus::Interaction::UpdateDriverGroup___c;

/// @brief Field Drivers, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_Drivers, put=__cordl_internal_set_Drivers)) ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  Drivers;

 __declspec(property(get=get_IsRootDriver, put=set_IsRootDriver)) bool  IsRootDriver;

 __declspec(property(get=get_Iterations, put=set_Iterations)) int32_t  Iterations;

/// @brief Field <IsRootDriver>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsRootDriver_k__BackingField, put=__cordl_internal_set__IsRootDriver_k__BackingField)) bool  _IsRootDriver_k__BackingField;

/// @brief Field _iterations, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__iterations, put=__cordl_internal_set__iterations)) int32_t  _iterations;

/// @brief Field _updateDrivers, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateDrivers, put=__cordl_internal_set__updateDrivers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  _updateDrivers;

/// @brief Convert operator to "::Oculus::Interaction::IUpdateDriver"
constexpr operator  ::Oculus::Interaction::IUpdateDriver*() noexcept;

/// @brief Method Awake, addr 0xa444890, size 0x114, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method Drive, addr 0xa4449b8, size 0x1e8, virtual true, abstract: false, final true
inline void Drive() ;

/// @brief Method InjectAllUpdateDriverGroup, addr 0xa444ba0, size 0x4, virtual false, abstract: false, final false
inline void InjectAllUpdateDriverGroup(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  updateDrivers) ;

/// @brief Method InjectUpdateDrivers, addr 0xa444ba4, size 0x124, virtual false, abstract: false, final false
inline void InjectUpdateDrivers(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  updateDrivers) ;

static inline ::Oculus::Interaction::UpdateDriverGroup* New_ctor() ;

/// @brief Method Start, addr 0xa4449a4, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method Update, addr 0xa4449a8, size 0x10, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>* const& __cordl_internal_get_Drivers() const;

constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*& __cordl_internal_get_Drivers() ;

constexpr bool const& __cordl_internal_get__IsRootDriver_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsRootDriver_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__iterations() const;

constexpr int32_t& __cordl_internal_get__iterations() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__updateDrivers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__updateDrivers() ;

constexpr void __cordl_internal_set_Drivers(::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  value) ;

constexpr void __cordl_internal_set__IsRootDriver_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__iterations(int32_t  value) ;

constexpr void __cordl_internal_set__updateDrivers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method .ctor, addr 0xa444cc8, size 0x18, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_IsRootDriver, addr 0xa444870, size 0x8, virtual true, abstract: false, final true
inline bool get_IsRootDriver() ;

/// @brief Method get_Iterations, addr 0xa444880, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Iterations() ;

/// @brief Convert to "::Oculus::Interaction::IUpdateDriver"
constexpr ::Oculus::Interaction::IUpdateDriver* i___Oculus__Interaction__IUpdateDriver() noexcept;

/// [CompilerGenerated]
/// @brief Method set_IsRootDriver, addr 0xa444878, size 0x8, virtual true, abstract: false, final true
inline void set_IsRootDriver(bool  value) ;

/// @brief Method set_Iterations, addr 0xa444888, size 0x8, virtual false, abstract: false, final false
inline void set_Iterations(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateDriverGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateDriverGroup(UpdateDriverGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateDriverGroup(UpdateDriverGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15807};

/// [CompilerGenerated]
/// @brief Field <IsRootDriver>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____IsRootDriver_k__BackingField;

/// [SerializeField]
/// [Interface(typeof(Oculus.Interaction.IUpdateDriver), new[] {  })]
/// @brief Field _updateDrivers, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ____updateDrivers;

/// @brief Field Drivers, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Oculus::Interaction::IUpdateDriver*>*  ___Drivers;

/// [SerializeField]
/// [Min(1)]
/// @brief Field _iterations, offset: 0x38, size: 0x4, def value: None
 int32_t  ____iterations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UpdateDriverGroup, ____IsRootDriver_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverGroup, ____updateDrivers) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverGroup, ___Drivers) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UpdateDriverGroup, ____iterations) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UpdateDriverGroup) == 0x40, "Size mismatch!");

} // namespace end def Oculus::Interaction
// [CompilerGenerated]
// Dependencies System.Object
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UpdateDriverGroup/<>c
class CORDL_TYPE UpdateDriverGroup___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Oculus::Interaction::UpdateDriverGroup___c*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*  __9__10_0;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*  __9__15_0;

static inline ::Oculus::Interaction::UpdateDriverGroup___c* New_ctor() ;

/// @brief Method <Awake>b__10_0, addr 0xa444d50, size 0x48, virtual false, abstract: false, final false
inline ::Oculus::Interaction::IUpdateDriver* _Awake_b__10_0(::UnityEngine::Object*  mono) ;

/// @brief Method <InjectUpdateDrivers>b__15_0, addr 0xa444d98, size 0x78, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> _InjectUpdateDrivers_b__15_0(::Oculus::Interaction::IUpdateDriver*  driver) ;

/// @brief Method .ctor, addr 0xa444d48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Oculus::Interaction::UpdateDriverGroup___c* getStaticF___9() ;

static inline ::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>* getStaticF___9__10_0() ;

static inline ::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>* getStaticF___9__15_0() ;

static inline void setStaticF___9(::Oculus::Interaction::UpdateDriverGroup___c*  value) ;

static inline void setStaticF___9__10_0(::System::Converter_2<::UnityW<::UnityEngine::Object>,::Oculus::Interaction::IUpdateDriver*>*  value) ;

static inline void setStaticF___9__15_0(::System::Converter_2<::Oculus::Interaction::IUpdateDriver*,::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UpdateDriverGroup___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverGroup___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UpdateDriverGroup___c(UpdateDriverGroup___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UpdateDriverGroup___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UpdateDriverGroup___c(UpdateDriverGroup___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15806};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Oculus::Interaction::UpdateDriverGroup___c) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
