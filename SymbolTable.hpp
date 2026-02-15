/**
 * File : SymbolTable.hpp
 * Symbol table info stored here
 * 
 */


#ifndef SYMBOL_TABLE_HEADER_FILE
#define SYMBOL_TABLE_HEADER_FILE

#include <string> 
#include <variant>
#include <memory>
#include <vector>
#include <unordered_map>
#include <stdint>


enum class TYPES = {INT, FLOAT, STRING};

typedef struct VarInfo{
	TYPES type;
	std::string name; 
	std::variant<int64_t, double, std::string> value;    ///in paractice double is garunteed 64bit in ARM64
	size_t def_line;
	size_t UID;
}VarInfo;


typedef struct FunInfo{
	std::string name;
	size_t UID; 
	TYPES return_type; 
	std::vector<size_t> param_ids;    ///unique ids of the params in symbol table   
	std::vector<size_t> local_ids; ///unique ids of local vars 
}FunInfo; 




class SymbolTable{
	///pass
};




#endif 
