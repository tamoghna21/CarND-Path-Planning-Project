#ifndef States_H_
#define States_H_

#include <string>
#include <fstream>

using namespace std;

class States {
public:
  /**
  * Constructor.
  */
  States();

  /**
  * Destructor.
  */
  virtual ~States();
  
  string getState();
  
private:
  // check initialized or not (first measurement)
  //bool is_initialized_;
  string cur_state;
};

#endif /* States_H_ */