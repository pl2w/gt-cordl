#pragma once
// IWYU pragma private; include "GlobalNamespace/PropHuntPools_Callbacks.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PropHuntPools_Callbacks)
namespace GlobalNamespace {
class ZoneData;
}
// Forward declare root types
namespace GlobalNamespace {
class PropHuntPools_Callbacks;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PropHuntPools_Callbacks*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PropHuntPools_Callbacks*, "", "PropHuntPools_Callbacks");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PropHuntPools_Callbacks
class CORDL_TYPE PropHuntPools_Callbacks : public ::System::Object {
public:
// Declarations
/// @brief Field _isListeningForZoneChanged, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isListeningForZoneChanged, put=setStaticF__isListeningForZoneChanged)) bool  _isListeningForZoneChanged;

/// @brief Field instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instance, put=setStaticF_instance)) ::GlobalNamespace::PropHuntPools_Callbacks*  instance;

/// @brief Method ListenForZoneChanged, addr 0x563a890, size 0xb8, virtual false, abstract: false, final false
inline void ListenForZoneChanged() ;

static inline ::GlobalNamespace::PropHuntPools_Callbacks* New_ctor() ;

/// @brief Method _OnZoneChanged, addr 0x563e8c8, size 0x2ec, virtual false, abstract: false, final false
inline void _OnZoneChanged(::ArrayW<::GlobalNamespace::ZoneData*>  zoneDatas) ;

/// @brief Method .ctor, addr 0x563e8c0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__isListeningForZoneChanged() ;

static inline ::GlobalNamespace::PropHuntPools_Callbacks* getStaticF_instance() ;

static inline void setStaticF__isListeningForZoneChanged(bool  value) ;

static inline void setStaticF_instance(::GlobalNamespace::PropHuntPools_Callbacks*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropHuntPools_Callbacks() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools_Callbacks", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PropHuntPools_Callbacks(PropHuntPools_Callbacks && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropHuntPools_Callbacks", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropHuntPools_Callbacks(PropHuntPools_Callbacks const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{640};

/// @brief Field preErr offset 0xffffffff size 0x8
static constexpr ::ConstString  preErr{u"ERROR!!!  PropHuntPools_Callbacks: "};

/// @brief Field preErrBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrBeta{u"ERROR!!!  (beta only log) PropHuntPools_Callbacks: "};

/// @brief Field preErrEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preErrEd{u"ERROR!!!  (editor only log) PropHuntPools_Callbacks: "};

/// @brief Field preLog offset 0xffffffff size 0x8
static constexpr ::ConstString  preLog{u"PropHuntPools_Callbacks: "};

/// @brief Field preLogBeta offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogBeta{u"(beta only log) PropHuntPools_Callbacks: "};

/// @brief Field preLogEd offset 0xffffffff size 0x8
static constexpr ::ConstString  preLogEd{u"(editor only log) PropHuntPools_Callbacks: "};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::PropHuntPools_Callbacks) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
