#ifdef __cpp_modules
                    module;
                    #endif
                
#pragma once
#include "MS/Internal/Xml/XPath/AstNode.hpp"
#include "MS/Internal/Xml/XPath/AstNode_AstType.hpp"
#include "MS/Internal/Xml/XPath/Axis.hpp"
#include "MS/Internal/Xml/XPath/Axis_AxisType.hpp"
#include "MS/Internal/Xml/XPath/Filter.hpp"
#include "MS/Internal/Xml/XPath/Function.hpp"
#include "MS/Internal/Xml/XPath/Function_FunctionType.hpp"
#include "MS/Internal/Xml/XPath/Group.hpp"
#include "MS/Internal/Xml/XPath/Operand.hpp"
#include "MS/Internal/Xml/XPath/Operator.hpp"
#include "MS/Internal/Xml/XPath/Operator_Op.hpp"
#include "MS/Internal/Xml/XPath/Root.hpp"
#include "MS/Internal/Xml/XPath/Variable.hpp"
#include "MS/Internal/Xml/XPath/XPathParser.hpp"
#include "MS/Internal/Xml/XPath/XPathScanner.hpp"
#include "MS/Internal/Xml/XPath/XPathScanner_LexKind.hpp"
#ifdef __cpp_modules
                    export module XPath;
                    #endif
                
