#pragma once
// IWYU pragma private; include "Drawing/Palette.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Palette)
namespace Drawing {
class Colorbrewer_Palette_Blues;
}
namespace Drawing {
class Colorbrewer_Palette_Set1;
}
namespace Drawing {
class Palette_Colorbrewer;
}
namespace Drawing {
class Palette_Pure;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Drawing {
class Colorbrewer_Palette_Blues;
}
namespace Drawing {
class Colorbrewer_Palette_Set1;
}
namespace Drawing {
class Palette;
}
namespace Drawing {
class Palette_Colorbrewer;
}
namespace Drawing {
class Palette_Pure;
}
// Write type traits
MARK_REF_T(::Drawing::Colorbrewer_Palette_Blues*);
MARK_REF_T(::Drawing::Colorbrewer_Palette_Set1*);
MARK_REF_T(::Drawing::Palette*);
MARK_REF_T(::Drawing::Palette_Colorbrewer*);
MARK_REF_T(::Drawing::Palette_Pure*);
DEFINE_IL2CPP_CLASS(::Drawing::Colorbrewer_Palette_Blues*, "Drawing", "Palette/Colorbrewer/Blues");
DEFINE_IL2CPP_CLASS(::Drawing::Colorbrewer_Palette_Set1*, "Drawing", "Palette/Colorbrewer/Set1");
DEFINE_IL2CPP_CLASS(::Drawing::Palette*, "Drawing", "Palette");
DEFINE_IL2CPP_CLASS(::Drawing::Palette_Colorbrewer*, "Drawing", "Palette/Colorbrewer");
DEFINE_IL2CPP_CLASS(::Drawing::Palette_Pure*, "Drawing", "Palette/Pure");
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Palette
class CORDL_TYPE Palette : public ::System::Object {
public:
// Declarations
using Colorbrewer = ::Drawing::Palette_Colorbrewer;

using Pure = ::Drawing::Palette_Pure;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Palette() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Palette", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Palette(Palette && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Palette", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Palette(Palette const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Palette) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Palette/Colorbrewer
class CORDL_TYPE Palette_Colorbrewer : public ::System::Object {
public:
// Declarations
using Blues = ::Drawing::Colorbrewer_Palette_Blues;

using Set1 = ::Drawing::Colorbrewer_Palette_Set1;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Palette_Colorbrewer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Palette_Colorbrewer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Palette_Colorbrewer(Palette_Colorbrewer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Palette_Colorbrewer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Palette_Colorbrewer(Palette_Colorbrewer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27770};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Palette_Colorbrewer) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object, UnityEngine.Color
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Palette/Colorbrewer/Blues
class CORDL_TYPE Colorbrewer_Palette_Blues : public ::System::Object {
public:
// Declarations
/// @brief Field Colors, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Colors, put=setStaticF_Colors)) ::ArrayW<::UnityEngine::Color>  Colors;

/// @brief Method GetColor, addr 0x55da710, size 0x13c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color GetColor(int32_t  classes, int32_t  index) ;

static inline ::ArrayW<::UnityEngine::Color> getStaticF_Colors() ;

static inline void setStaticF_Colors(::ArrayW<::UnityEngine::Color>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Colorbrewer_Palette_Blues() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Colorbrewer_Palette_Blues", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Colorbrewer_Palette_Blues(Colorbrewer_Palette_Blues && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Colorbrewer_Palette_Blues", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Colorbrewer_Palette_Blues(Colorbrewer_Palette_Blues const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Colorbrewer_Palette_Blues) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object, UnityEngine.Color
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Palette/Colorbrewer/Set1
class CORDL_TYPE Colorbrewer_Palette_Set1 : public ::System::Object {
public:
// Declarations
/// @brief Field Blue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Blue, put=setStaticF_Blue)) ::UnityEngine::Color  Blue;

/// @brief Field Brown, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Brown, put=setStaticF_Brown)) ::UnityEngine::Color  Brown;

/// @brief Field Green, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Green, put=setStaticF_Green)) ::UnityEngine::Color  Green;

/// @brief Field Grey, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Grey, put=setStaticF_Grey)) ::UnityEngine::Color  Grey;

/// @brief Field Orange, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Orange, put=setStaticF_Orange)) ::UnityEngine::Color  Orange;

/// @brief Field Pink, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Pink, put=setStaticF_Pink)) ::UnityEngine::Color  Pink;

/// @brief Field Purple, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Purple, put=setStaticF_Purple)) ::UnityEngine::Color  Purple;

/// @brief Field Red, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Red, put=setStaticF_Red)) ::UnityEngine::Color  Red;

/// @brief Field Yellow, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Yellow, put=setStaticF_Yellow)) ::UnityEngine::Color  Yellow;

static inline ::UnityEngine::Color getStaticF_Blue() ;

static inline ::UnityEngine::Color getStaticF_Brown() ;

static inline ::UnityEngine::Color getStaticF_Green() ;

static inline ::UnityEngine::Color getStaticF_Grey() ;

static inline ::UnityEngine::Color getStaticF_Orange() ;

static inline ::UnityEngine::Color getStaticF_Pink() ;

static inline ::UnityEngine::Color getStaticF_Purple() ;

static inline ::UnityEngine::Color getStaticF_Red() ;

static inline ::UnityEngine::Color getStaticF_Yellow() ;

static inline void setStaticF_Blue(::UnityEngine::Color  value) ;

static inline void setStaticF_Brown(::UnityEngine::Color  value) ;

static inline void setStaticF_Green(::UnityEngine::Color  value) ;

static inline void setStaticF_Grey(::UnityEngine::Color  value) ;

static inline void setStaticF_Orange(::UnityEngine::Color  value) ;

static inline void setStaticF_Pink(::UnityEngine::Color  value) ;

static inline void setStaticF_Purple(::UnityEngine::Color  value) ;

static inline void setStaticF_Red(::UnityEngine::Color  value) ;

static inline void setStaticF_Yellow(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Colorbrewer_Palette_Set1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Colorbrewer_Palette_Set1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Colorbrewer_Palette_Set1(Colorbrewer_Palette_Set1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Colorbrewer_Palette_Set1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Colorbrewer_Palette_Set1(Colorbrewer_Palette_Set1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27768};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Colorbrewer_Palette_Set1) == 0x10, "Size mismatch!");

} // namespace end def Drawing
// Dependencies System.Object, UnityEngine.Color
namespace Drawing {
// Is value type: false
// CS Name: Drawing.Palette/Pure
class CORDL_TYPE Palette_Pure : public ::System::Object {
public:
// Declarations
/// @brief Field Black, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Black, put=setStaticF_Black)) ::UnityEngine::Color  Black;

/// @brief Field Blue, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Blue, put=setStaticF_Blue)) ::UnityEngine::Color  Blue;

/// @brief Field Clear, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Clear, put=setStaticF_Clear)) ::UnityEngine::Color  Clear;

/// @brief Field Cyan, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Cyan, put=setStaticF_Cyan)) ::UnityEngine::Color  Cyan;

/// @brief Field Green, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Green, put=setStaticF_Green)) ::UnityEngine::Color  Green;

/// @brief Field Grey, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Grey, put=setStaticF_Grey)) ::UnityEngine::Color  Grey;

/// @brief Field Magenta, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Magenta, put=setStaticF_Magenta)) ::UnityEngine::Color  Magenta;

/// @brief Field Red, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Red, put=setStaticF_Red)) ::UnityEngine::Color  Red;

/// @brief Field White, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_White, put=setStaticF_White)) ::UnityEngine::Color  White;

/// @brief Field Yellow, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_Yellow, put=setStaticF_Yellow)) ::UnityEngine::Color  Yellow;

static inline ::UnityEngine::Color getStaticF_Black() ;

static inline ::UnityEngine::Color getStaticF_Blue() ;

static inline ::UnityEngine::Color getStaticF_Clear() ;

static inline ::UnityEngine::Color getStaticF_Cyan() ;

static inline ::UnityEngine::Color getStaticF_Green() ;

static inline ::UnityEngine::Color getStaticF_Grey() ;

static inline ::UnityEngine::Color getStaticF_Magenta() ;

static inline ::UnityEngine::Color getStaticF_Red() ;

static inline ::UnityEngine::Color getStaticF_White() ;

static inline ::UnityEngine::Color getStaticF_Yellow() ;

static inline void setStaticF_Black(::UnityEngine::Color  value) ;

static inline void setStaticF_Blue(::UnityEngine::Color  value) ;

static inline void setStaticF_Clear(::UnityEngine::Color  value) ;

static inline void setStaticF_Cyan(::UnityEngine::Color  value) ;

static inline void setStaticF_Green(::UnityEngine::Color  value) ;

static inline void setStaticF_Grey(::UnityEngine::Color  value) ;

static inline void setStaticF_Magenta(::UnityEngine::Color  value) ;

static inline void setStaticF_Red(::UnityEngine::Color  value) ;

static inline void setStaticF_White(::UnityEngine::Color  value) ;

static inline void setStaticF_Yellow(::UnityEngine::Color  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Palette_Pure() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Palette_Pure", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Palette_Pure(Palette_Pure && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Palette_Pure", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Palette_Pure(Palette_Pure const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Drawing::Palette_Pure) == 0x10, "Size mismatch!");

} // namespace end def Drawing
