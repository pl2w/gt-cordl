#pragma once
// IWYU pragma private; include "GlobalNamespace/LerpTask_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LerpTask_1)
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class LerpTask_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::LerpTask_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::LerpTask_1, "", "LerpTask`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: LerpTask`1<T>
class CORDL_TYPE LerpTask_1 : public ::System::Object {
public:
// Declarations
/// @brief Field active, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get_active, put=__cordl_internal_set_active)) bool  active;

/// @brief Field duration, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

/// @brief Field elapsed, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field lerpFrom, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_lerpFrom, put=__cordl_internal_set_lerpFrom)) T  lerpFrom;

/// @brief Field lerpTo, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_lerpTo, put=__cordl_internal_set_lerpTo)) T  lerpTo;

/// @brief Field onLerp, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLerp, put=__cordl_internal_set_onLerp)) ::System::Action_3<T,T,float_t>*  onLerp;

/// @brief Field onLerpEnd, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_onLerpEnd, put=__cordl_internal_set_onLerpEnd)) ::System::Action*  onLerpEnd;

/// @brief Method Finish, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Finish() ;

static inline ::GlobalNamespace::LerpTask_1<T>* New_ctor() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Start(T  from, T  to, float_t  duration) ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Update() ;

constexpr bool const& __cordl_internal_get_active() const;

constexpr bool& __cordl_internal_get_active() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr T const& __cordl_internal_get_lerpFrom() const;

constexpr T& __cordl_internal_get_lerpFrom() ;

constexpr T const& __cordl_internal_get_lerpTo() const;

constexpr T& __cordl_internal_get_lerpTo() ;

constexpr ::System::Action_3<T,T,float_t>* const& __cordl_internal_get_onLerp() const;

constexpr ::System::Action_3<T,T,float_t>*& __cordl_internal_get_onLerp() ;

constexpr ::System::Action* const& __cordl_internal_get_onLerpEnd() const;

constexpr ::System::Action*& __cordl_internal_get_onLerpEnd() ;

constexpr void __cordl_internal_set_active(bool  value) ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_lerpFrom(T  value) ;

constexpr void __cordl_internal_set_lerpTo(T  value) ;

constexpr void __cordl_internal_set_onLerp(::System::Action_3<T,T,float_t>*  value) ;

constexpr void __cordl_internal_set_onLerpEnd(::System::Action*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LerpTask_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LerpTask_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LerpTask_1(LerpTask_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LerpTask_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LerpTask_1(LerpTask_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2323};

/// @brief Field elapsed, offset: 0x10, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field duration, offset: 0x14, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field lerpFrom, offset: 0x18, size: 0x8, def value: None
 T  ___lerpFrom;

/// @brief Field lerpTo, offset: 0x20, size: 0x8, def value: None
 T  ___lerpTo;

/// @brief Field onLerp, offset: 0x28, size: 0x8, def value: None
 ::System::Action_3<T,T,float_t>*  ___onLerp;

/// @brief Field onLerpEnd, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ___onLerpEnd;

/// @brief Field active, offset: 0x38, size: 0x1, def value: None
 bool  ___active;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
